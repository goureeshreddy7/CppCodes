#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
void solve(){
    ll n,m;cin>>n>>m;
    vl nx(n+2,n+1);
    for(ll i=0;i<m;i++){
        ll u,v;cin>>u>>v;
        if(u>v) swap(u,v);
        nx[u]=min(nx[u],v);
    }
    ll ans=0;
    for(ll i=n;i>=1;i--){
        nx[i]=min(nx[i],nx[i+1]);
        ans+=(nx[i]-i);
    }
    cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--) solve();
}