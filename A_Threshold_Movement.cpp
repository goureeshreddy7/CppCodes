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
        ll odmn=INT_MAX,evmx=INT_MIN;
        vl a(n);

        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(i%2!=0){
                evmx=max(evmx,a[i]);
            }else{
                odmn=min(odmn,a[i]);
            }
        }
        if (n%2!=0) {
            cout<<"NO\n";
        }else if(odmn>evmx+1) {
            cout<<"YES\n";
        } 
        else{
            cout<<"NO\n";
        }  
    }


}