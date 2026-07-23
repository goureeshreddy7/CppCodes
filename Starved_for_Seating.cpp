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
        ll n,k;cin>>n>>k;
        vl a(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i]/2;
        }
        sort(a.begin(),a.end());
        ll ct=0;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                if(sum+(a[i]/2)+(a[j]/2)>k){
                    ct++;
                }
            }
        }
        cout<<ct<<"\n";

    }
    
}