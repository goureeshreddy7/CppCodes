import json

html = '''<!DOCTYPE html>
<html>
<head>
<title>GSoC 2026 Student Directory</title>
<style>
  body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; margin: 20px; background: #f4f4f9; }
  .header { text-align: center; margin-bottom: 20px; }
  table { width: 100%; border-collapse: collapse; background: #fff; box-shadow: 0 0 10px rgba(0,0,0,0.1); border-radius: 8px; overflow: hidden; }
  th, td { padding: 15px; text-align: left; border-bottom: 1px solid #eee; }
  th { background-color: #4285f4; color: white; cursor: pointer; position: sticky; top: 0; }
  tr:hover { background-color: #f8f9fa; }
  input { width: 100%; padding: 15px; margin-bottom: 20px; box-sizing: border-box; font-size: 16px; border: 2px solid #ccc; border-radius: 5px; }
  input:focus { border-color: #4285f4; outline: none; }
  a { color: #4285f4; text-decoration: none; }
  a:hover { text-decoration: underline; }
</style>
</head>
<body>
<div class="header">
  <h2>Google Summer of Code 2026 - Student Directory</h2>
  <p>Interactive student-wise database. Type below to filter.</p>
</div>
<input type="text" id="myInput" onkeyup="searchTable()" placeholder="Search for students, organizations, or project names...">
<table id="gsocTable">
  <tr>
    <th>Student Name</th>
    <th>GitHub Profile</th>
    <th>Organization</th>
    <th>Project Title</th>
  </tr>
'''

try:
    with open('gsoc_2026_raw_data.json', encoding='utf-8') as f:
        data = json.load(f)[0]
    
    projs = data.get('entities', {}).get('projects', [])
    
    # Sort by student name
    projs_sorted = sorted(projs, key=lambda x: str(x.get('contributor_name', '')).lower())
    
    for p in projs_sorted:
        student = p.get('contributor_name', 'Unknown')
        github = p.get('github_username', '')
        org = p.get('organization_name', 'Unknown')
        title = p.get('title', 'Unknown')
        
        github_link = f'<a href="https://github.com/{github}" target="_blank">@{github}</a>' if github else 'N/A'
        
        html += f'''
        <tr>
            <td><strong>{student}</strong></td>
            <td>{github_link}</td>
            <td><span style="background:#e8f0fe; color:#1967d2; padding:4px 8px; border-radius:4px; font-size:14px;">{org}</span></td>
            <td>{title}</td>
        </tr>
        '''
        
except Exception as e:
    html += f"<tr><td colspan='4'>Error loading data: {e}</td></tr>"

html += '''
</table>
<script>
function searchTable() {
  var input, filter, table, tr, td, i, txtValue;
  input = document.getElementById('myInput');
  filter = input.value.toUpperCase();
  table = document.getElementById('gsocTable');
  tr = table.getElementsByTagName('tr');
  
  for (i = 1; i < tr.length; i++) {
    tr[i].style.display = 'none';
    td = tr[i].getElementsByTagName('td');
    for (var j = 0; j < td.length; j++) {
      if (td[j]) {
        txtValue = td[j].textContent || td[j].innerText;
        if (txtValue.toUpperCase().indexOf(filter) > -1) {
          tr[i].style.display = '';
          break;
        }
      }
    }
  }
}
</script>
</body>
</html>
'''

with open('gsoc_2026_student_directory.html', 'w', encoding='utf-8') as f:
    f.write(html)
print("Created gsoc_2026_student_directory.html")
