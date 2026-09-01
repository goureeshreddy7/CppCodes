#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

ll binpow(ll a,ll b){
    if(b==0) return 1;
    if(b%2==1){
        return (a*binpow(a,b-1));
    }else{
        ll temp=binpow(a,b/2);
        return (temp* temp);  
    }
}

void solve(){
    ll a,b;cin>>a>>b;
    cout<<binpow(a,b);
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