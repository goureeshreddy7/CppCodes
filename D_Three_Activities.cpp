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
        vl vs(n),vm(n),vg(n);
        ll mxs=-1,mxm=-1,mxg=-1,mxis=-1,mxim=-1,mxig=-1;
        for(ll i=0;i<n;i++){
            cin>>vs[i];
            if(mxs<vs[i]){
                mxs=vs[i];
                mxis=i;
            }
        }
        for(ll i=0;i<n;i++){
            cin>>vm[i];
            if(mxm<vm[i]){
                mxm=vm[i];
                mxim=i;
            }
        }
        for(ll i=0;i<n;i++){
            cin>>vg[i];
            if(mxg<vg[i]){
                mxg=vg[i];
                mxig=i;
            }
        }

        
    }
    
}