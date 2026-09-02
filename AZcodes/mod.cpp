#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

void solve(){
    ll n=5;
    vl a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll mod=0;
    for(ll i=0;i<n;i++){
        mod=(a[i]+mod)%3;
    }
    cout<<mod<<"  "<<mod%3;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t=1;
    while(t--){
        solve();
    }
} 