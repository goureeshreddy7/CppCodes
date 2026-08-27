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
        ll n;cin>>n;
        vl a(n);
        set<ll> s;
        s.insert(0);
        ll pres=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(i%2!=0){
                a[i]=a[i]-(2*a[i]);
            }
            pres+=a[i];
            s.insert(pres);
        }
        if(s.size()!=n+1) cout<<"YES\n";
        else cout<<"NO\n";

        
    }
}