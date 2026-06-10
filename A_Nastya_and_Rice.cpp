#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        if(n*(a-b)>c+d){
            cout<<"No\n";
        }else if(n*(a+b)<c-d){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
    
}
//before i am thinkig what is yes but
//now what can be no 
// whaterver end sem exams realy annoying time 