#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        ll pref=0,suff=n-1;
        for(ll i=0;i<n;i++){
            if(a[i]>=i)pref=i;
            else break;
        }
        for(ll i=n-1;i>=0;i--){
            if(a[i]>=(n-1-i))suff=i;
            else break;
        }
        if(pref>=suff)cout<<"YES\n";
        else cout<<"NO\n";
    }
}