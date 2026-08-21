#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll o=0,e=0;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            if(x%2!=0)o++;
            else e++;
        }
        if(o==e) cout<<o+e<<"\n";
        else cout<<(min(o,e)*2)+1<<"\n";
    }
}