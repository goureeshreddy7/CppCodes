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
        ll n,k;
        cin>>n>>k;
        if(n<=k){
            cout<<1<<"\n";
        }else{
            ll ct=0;
            ll z=sqrt(n);
            while(n!=0){
                if(z>k){
                    z=z-log(z)-1;
                }else{
                    if(n%z==0){
                        ct=z;
                        break;
                    }
                }
            }
            cout<<n/ct<<"\n";
        }
    }
    
}