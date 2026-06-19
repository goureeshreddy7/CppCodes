#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;
ll nsum(ll a){
    return ((a+1)*a)/2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,x,y;cin>>n>>x>>y;
        ll numsx,numsy;
        numsx=(n/x)-(n/(lcm(x,y)));
        numsy=(n/y)-(n/(lcm(x,y)));
        ll rm=n-numsx;
        ll mxsum=nsum(n)-nsum(rm)-nsum(numsy);
        cout<<mxsum<<"\n";
    }
    
}
//just to identify which are acctully not mattering in sum
//like no.s which repeate both sides 