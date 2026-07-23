#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,q;cin>>n>>k>>q;
    vl l(n),r(n),b(q);
    ll mx=INT_MIN;
    for(ll i=0;i<n;i++){
        cin>>l[i]>>r[i];
        mx=max(mx,r[i]);
    }
    vl presum(mx,0);
    for(ll i=0;i<n;i++){
        presum[l[i]]++;
        presum[r[i]+1]--;
    }
    for(ll i=1;i<mx;i++){
        presum[i]+=presum[i-1];
    }
    for(ll i=0;i<q;i++){
        ll lf,rt;cin>>lf>>rt;
        ll ct=0;
        for(ll i=lf;i<rt;i++){
            if(presum[i]==k) ct++;
        }
        cout<<ct<<"\n";
    }
    
}