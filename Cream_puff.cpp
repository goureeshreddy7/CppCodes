#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
// ll isps(ll k){
//     ll rt=sqrt(k);
//     return rt*rt==k;
// }

void solve(){
    ll n;cin>>n;
    set<ll> a;

    for(ll i=1;i*i<=n;i++){
            if(n%i==0){
                a.insert(i);
                a.insert(n/i);
            }
    }
    for(auto it:a){
        cout<<it<<"\n";
    }
    // if(isps(n)){
    //     a.insert(1);
    //     for(ll i=2;i*i<n;i++){
    //         if(n%i==0){
    //             a.insert(i);
    //             a.insert(n/i);
    //         }
    //     }
    //     a.insert(int(sqrt(n)));
    // }
    // else{
    //     for(ll i=1;i*i<n;i++){
    //         if(n%i==0){
    //             a.insert(i);
    //             a.insert(n/i);
    //         }
    //     }
    // }
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