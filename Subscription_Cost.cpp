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
        ll n,x,y;cin>>n>>x>>y;
        if(n>3) cout<<(x*3)+(y*(n-3))<<"\n";
        else cout<<n*x<<"\n";
    }


}