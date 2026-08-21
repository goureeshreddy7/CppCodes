#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

bool ip(ll x){
    if(x<=1)return false;
    for(ll i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        if(ip(n+1))cout<<"YES\n";
        else cout<<"NO\n";
    }
}