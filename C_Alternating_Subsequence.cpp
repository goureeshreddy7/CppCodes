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
        vl sp,sn;
        ll pst=1;
        for(ll i=0;i<n;i++){
            if(a[i]>0&&pst==1){
                sp.push_back(a[i]);
                pst=0;
            }
            if(a[i]<0&&pst==0){
                sp.push_back(a[i]);
                pst=1;
            }
        }
        pst=0;
        for(ll i=0;i<n;i++){
            if(a[i]>0&&pst==1){
                sn.push_back(a[i]);
                pst=0;
            }
            if(a[i]<0&&pst==0){
                sn.push_back(a[i]);
                pst=1;
            }
        }
        ll mxsum=INT_MIN;
        for(ll i=0;i<sp.size();i++){
            mxsum=max(mxsum,mxsum+sp[i]);
            if(mxsum<0){
                mxsum=0;
            }
        }
        for(ll i=0;i<sn.size();i++){
            mxsum=max(mxsum,mxsum+sn[i]);
            if(mxsum<0){
                mxsum=0;
            }
        }
        cout<<mxsum<<"\n";
    }
    
}