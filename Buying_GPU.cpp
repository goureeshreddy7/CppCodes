#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll x,y,z;cin>>x>>y>>z;
        if(z<=y){
            cout<<-1<<"\n";
        }else{
            ll k=z-y;
            cout<<(x+k-1)/k<<"\n";
        }
    }
}