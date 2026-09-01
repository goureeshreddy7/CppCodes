#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

ll mod=int(1e9+7);
ll binpow(ll a,ll b){
    if(b==0) return 1;
    if(b%2==1) return (a*binpow(a,b-1))%mod;
    else{
        ll temp =binpow(a,b/2);
        return (temp*temp)%mod;
    }
}

void solve(){
    ll n;cin>>n;
    ll k=1LL<<(n);
    k=k-2;
    // cout<<k<<endl;
    // ll p=pow(4,k);
    ll p=(binpow(4,k)*6)%mod;
    cout<<p%mod;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
} 