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
        vl a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll mx=0;
        ll num=-1;
        for(ll i=0;i<n;i++){
        num=a[i];     
            ll imx=0;
            ll curnum=a[i];
            for(ll j=i+1;j<n;j++){
                if(a[j]%curnum==0&&a[j]>curnum){
                    imx++;curnum=a[j];
                }
            }
            if(mx<imx) mx=imx;
        }
        cout<<mx+1<<"\n";
    }
}