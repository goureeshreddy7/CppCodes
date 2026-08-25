#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        
        bool found = false;
        for(ll i=1;i<n-1;i++){
            if(a[i] > a[i-1] && a[i] > a[i+1]){
                cout<<"YES\n";
                cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
                found = true;
                break;
            }
        }
        if(!found) cout<<"NO\n";
    }
}