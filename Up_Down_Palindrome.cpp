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
        ll p=0;
        ll l=0,r=n-1;
        ll mnx=INT_MIN,mxx=INT_MAX;
        while(l<r){
            if(abs(a[l]-a[r])==0){
                l++;r--;
            }else if(abs(a[l]-a[r])==2){
                ll cmn=min(a[l],a[r]);
                ll cmx=cmn+1;
                mnx=max(mnx,cmn);
                mxx=min(mxx,cmx);
                if(mnx>mxx){
                    cout<<"No\n";
                    p=1;
                    break;
                }
                l++;r--;
            }else{
                cout<<"No\n";
                p=1;
                break;
            }
        }
        if(!p){
            cout<<"Yes\n";
        }
    }
}