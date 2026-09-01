#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

vl is_prime(10001,1);
void solve(){
    ll n=10000;
    for(ll i=2;i<=n;i++){
        if(is_prime[i]==1){
            for(ll j=i*i;j<=n;j=j*i){
                is_prime[j]=0;
            }
        }
    }
    ll x;cin>>x;
    if(is_prime[x]) cout<<"YES";
    else cout<<"NO";
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