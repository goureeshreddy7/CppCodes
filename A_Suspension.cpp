#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

void solve(){
    ll n,y,r;cin>>n>>y>>r;
    if(r+(y/2)>n){
        cout<<n<<"\n";
    }else{
        cout<<r+(y/2)<<"\n";
    }
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