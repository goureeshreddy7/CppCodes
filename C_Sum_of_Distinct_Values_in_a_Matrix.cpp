#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--) {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        vl a(x),b(y);
        for(ll i=0;i<x;i++) {
            cin>>a[i];
        }
        for(ll i=0;i<y;i++) {
            cin>>b[i];
        }
        ll cx=min(x,n);
        ll cy=min(y,m);
        ll i=x-cx,j=y-cy;
        ll sm=0,sz=0;
        while(i<x&&j<y) {
            if(a[i]<b[j]) {
                sm+=a[i];
                i++;sz++;
            } else if(a[i]>b[j]) {
                sm+=b[j];
                j++;sz++;
            } else {
                sm+=a[i];
                i++;
                j++;sz++;
            }
        }
        while(i<x) {
            sm+=a[i];
            i++;sz++;
        }
        while(j<y) {
            sm+=b[j];
            j++;sz++;
        }
        if(cx==n&&cy==m&&sz==n+m) {
            sm-=min(a[x-cx],b[y-cy]);
        }    
        cout<<sm<<"\n";
    }
}