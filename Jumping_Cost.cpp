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
        vl a(n+1);
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        ll mb=0,ps=0;
        for(ll i=2;i<=n;i++){
            ll cb=ps+a[i]-(i-1);
            mb=max(mb,cb);
            if(a[i]>0)ps+=a[i];
        }
        cout<<mb<<"\n";
    }
}