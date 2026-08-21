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
        sort(a.begin(),a.end());
        ll sm=0,mxf=0,mxv=0;
        for(ll i=n-1;i>=0;){
            ll j=i;
            while(j>=0&&a[j]==a[i])j--;
            ll frq=i-j;
            sm+=a[i]*frq;
            if(frq>mxf){
                mxf=frq;
                mxv=a[i];
            }
            i=j;
        }
        ll s=n-mxf;
        if(mxf<=s+1){
            cout<<sm<<"\n";
        }else{
            cout<<(sm-(mxf*mxv))+((s+2)*mxv)<<"\n";
        }
    }
}