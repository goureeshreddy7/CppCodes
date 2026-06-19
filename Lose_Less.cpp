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
        ll m,n;cin>>m>>n;
        if(n<=m){
            cout<<m-n<<"\n";
        }else{
            ll x=(n-m+1)/2;
            ll y=n-3*x;
            ll z=m-(x+y);
            cout<<z<<"\n";
        }
    }
    
}