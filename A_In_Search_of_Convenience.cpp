#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

void solve(){
    ll x,y,r;cin>>x>>y>>r;
    for(ll i=x-r;i<=x+r;i++){
        for(ll j=y-r;j<=y+r;j++){
            if(r*r==((x-i)*(x-i)+(y-j)*(y-j))){
                cout<<i<<" "<<j<<"\n";
                return; 
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--) solve();
}