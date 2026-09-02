#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

ll mod=int(1e9+7);
ll binpow(ll a,ll b){
    if(b==0) return 1;
    if(b%2==1){
        return (a*binpow(a,b-1)%mod);
    }else{
        ll temp =binpow(a,b/2);
        return (temp*temp%mod);
    }
}

void solve(){
    ll a,b;cin>>a>>b;
    ll k=binpow(a,b);
    cout<<k%mod<<endl;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        solve();
    }
} 