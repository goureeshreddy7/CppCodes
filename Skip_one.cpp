#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        vl a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        
        ll sum=0;
        ll mx=0;
        ll ct=n;
        for(ll i=0;i<n;i++){
            sum+=a[i];
            mx=max(mx,a[i]);
            if(sum-mx>k){
                ct=i;
                break;
            }
        }
        cout<<ct<<"\n";
    }
}