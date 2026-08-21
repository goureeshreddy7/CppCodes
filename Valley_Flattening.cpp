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
        ll n;cin>>n;
        vl a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        map<ll,ll> mp;
        vl res;
        for(ll i=1;i<n-1;i++){
            vl temp{a[i],a[i-1],a[i+1]};
            sort(temp.begin(),temp.end());
            if(temp[0]==a[i]){
                res.push_back(a[i]);
                mp[a[i]]=i;
            }
        }
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        for(ll i=0;i<res.size();i++){
            a[mp[res[i]]-1]=res[i];
            a[mp[res[i]]+1]=res[i];
        }
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=a[i];
        }
        cout<<sum<<"\n";
    }


}