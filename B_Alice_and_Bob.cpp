#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

void solve(){
   ll n,a;cin>>n>>a;
    ll l=0,r=0;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        if(x<a) l++;
        else if(x>a) r++;
    }
    if(l>r) cout<<a-1<<"\n";
    else cout<<a+1<<"\n";
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