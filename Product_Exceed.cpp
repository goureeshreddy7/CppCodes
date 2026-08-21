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
        ll x,y,p;cin>>x>>y>>p;
        ll ct=0;
        // sort(a.begin(),a.end());
        while(x*y<p){
           if(x>y){
            y++;ct++;
           }
           else {
            y++;ct++;
           }
        }
        cout<<ct<<"\n";
    }
}