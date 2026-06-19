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
        ll n,k;cin>>n>>k;
        vl a(n+1);
        ll mx=LLONG_MIN;
        for(ll i=1;i<=n;i++){
            cin>>a[i];
            if(i<=k&&a[i]>mx){
                mx=a[i];
            }
        }



        
        // for(ll i=k;i<=n;i++){
        //     if(mx<a[i]){
        //         cout<<a[i]<<" ";
        //         mx=a[i];
        //     }else{
        //         cout<<mx<<" ";
        //     }
        // }
        cout<<"\n";


    }
    
}