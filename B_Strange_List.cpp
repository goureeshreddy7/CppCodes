#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,x;cin>>n>>x;
        vector<pair<ll,ll>> v;
        ll sum=0;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            sum+=a;
            v.push_back({a,1});
        }
        for(ll i=0;i<v.size();i++){
            if(v[i].first%x==0){
                sum+=v[i].first*v[i].second;
                v.push_back({v[i].first/x,v[i].second*x});
            }else break;
        }
        cout<<sum<<"\n";
    }
}