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
        vl a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        vl dif(n,-1);
        ll prev=-1;
        for(ll i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                prev =i;
            }
            dif[i]=prev;
        }

        ll q;cin>>q;
        while(q--){
            ll l,r;cin>>l>>r;
            if(dif[r-1]>l-1){
                cout<<dif[r-1]<<" "<<dif[r-1]+1<<"\n";
            }
            else{
                cout<<"-1 -1\n";
            }
        }


    }
}