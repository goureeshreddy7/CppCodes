#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
ll isps(ll k){
    ll rt=int(sqrt(k));
    if(rt*rt==k) return rt;
    else return 0;
}

vl is_prime(1000001,1);
void solve(){
    ll n;cin>>n;
    // vl a(n);
    // for(ll i=0;i<n;i++) cin >>a[i];
    is_prime[0]=0;
    is_prime[1]=0;
    for(ll i=2;i<=int(1e6);i++){
        if(is_prime[i]==1){
            for(ll j=i*i;j<=int(1e6);j+=i){
                is_prime[j]=0;
            }
        }
    }
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        ll sqr=isps(x);
        if(sqr&&is_prime[sqr]){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;t=1;
    while(t--){
        solve();
    }
} 