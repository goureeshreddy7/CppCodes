#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    map<ll,ll> mp;
    ll ct=0;
    while(n>0){
        ll k=n%10;
        n/=10;
        mp[k]++;
        if(mp[k]==2){
            ct++;
        }
    }
    cout<<endl<<ct;

}