#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vl a((2*n),0);
        vl fin(n,0);
        for(ll i=0;i<2*n;i++){
            cin>>a[i];
        }
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=max(a[i],a[2*n-1-i]);
        }
        cout<<sum<<"\n";
    }
}