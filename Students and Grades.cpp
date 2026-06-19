#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            mp[x]=1;
        }
        for(ll i=0;i<m;i++){
            ll x;cin>>x;
            if(mp[x]==1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
                mp[x]=1;
            }
        }
    }
    
}