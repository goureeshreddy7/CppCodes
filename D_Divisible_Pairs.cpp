#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,x,y;cin>>n>>x>>y;
        map<pair<ll,ll>,ll> mp;
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            ll rx=a%x;
            ll ry=a%y;
            ll tx=(x-rx)%x;
            ans+=mp[{tx,ry}];
            mp[{rx,ry}]++;
        }
        cout<<ans<<"\n";
    }
}