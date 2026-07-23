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
        ll n,k,x;cin>>n>>k>>x;
        if(x<=(n*(n+1)/2)-((n-k)*(n-k+1)/2)&&x>=k*(k+1)/2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }


}