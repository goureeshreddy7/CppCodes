#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll a,b,n,s;cin>>a>>b>>n>>s;
        ll k=min(a,s/n);
        if(s-(k*n)<=b)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
//dont know why i complicated this qn any how made it byee:-)