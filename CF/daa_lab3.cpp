#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n;
    vector<int>a(n);
    for (int i=0; i < n; i++) cin >> a[i];
    cin >> k;

    int cnt1 = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == k) cnt1++;
    cout<< cnt1 << endl;
    
    
    
    unordered_map<int,int> mp;
    int cnt3=0;
    for (int i = 0; i < n; i++) {
        int need = k - a[i];
        if (mp.find(need) != mp.end()) cnt3 += mp[need];
        mp[a[i]]++;
    }
    cout<<cnt3<<endl;
}