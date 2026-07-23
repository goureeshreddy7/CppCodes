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
        ll mx=INT_MIN;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(mx<a[i]) mx=a[i];
        }       
        ll ct=0;
        for(ll i=0;i<n;i++){
            if(a[i]==mx) ct++;
        } 
        cout<<ct<<"\n";
    }


}