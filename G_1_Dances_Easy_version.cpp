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
        ll n,m;cin>>n>>m;
        vl a(n);
        a[0]=1;
        vl b(n);
        for(ll i=1;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ct=0;
        ll ai=0,bi=0,am=n-1,bm=n-1;
        while(ai<=bm){
            if(a[ai]<b[bi]){
                bi++;
                ai++;
            }else{
                bm--;
                bi++;
                ct++;
            }
        }
        cout<<ct<<"\n";
    }
} 