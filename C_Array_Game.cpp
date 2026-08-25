#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        vl a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        
        if(k>=3){
            cout<<0<<"\n";
            continue;
        }
        
        sort(a.begin(),a.end());
        ll ans=a[0];
        
        for(ll i=1;i<n;i++){
            ans=min(ans,a[i]-a[i-1]);
        }
        
        if(k==1){
            cout<<ans<<"\n";
            continue;
        }
        
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                ll d=a[j]-a[i];
                auto it=lower_bound(a.begin(),a.end(),d);
                if(it!=a.end()){
                    ans=min(ans,*it-d);
                }
                if(it!=a.begin()){
                    ans=min(ans,d-*(--it));
                }
            }
        }
        cout<<ans<<"\n";
    }
}