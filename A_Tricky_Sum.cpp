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
        ll n;cin>>n;
        ll k=n*(n+1)/2;
        ll i=1;
        while(i<=n){
            k-=2*i;
            i*=2;
        }
        cout<<k<<"\n";
    }
    
}