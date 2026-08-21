#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vl a(n);
        ll md=INT_MAX;
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=1;i<n;i++)md=min(md,a[i]-a[i-1]);
        if(md<0)cout<<"0\n";
        else cout<<(md/2)+1<<"\n";
    }
}