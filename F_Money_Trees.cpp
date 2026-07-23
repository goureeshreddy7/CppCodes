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
        vl a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        ll l=0,r=0,cursum=0,mxlength=0;
        while(r<n){
            if(r>0&&b[r-1]%b[r]!=0){
                cursum=0;
                l=r;
            }
            cursum+=a[r];
            while(cursum>k&&l<=r){
                cursum-=a[l];
                l++;
            }
            mxlength=max(mxlength,r-l+1);
            r++;

        }
        cout<<mxlength<<"\n";
    }


}