#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
vl spf(1000001);
void solve(){
    for(ll i=0;i<=100000;i++) spf[i]=i;
    for(ll i=2;i<=100000;i++){
        if(spf[i]==i){
            for(ll j=i;j<=100000;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }

    

    //////////////////just for time pass////////////////////
    // ll x;cin>>x;
    // vl z;
    // ll ct=0;
    // while(x>1){
    //     z.push_back(spf[x]);
    //     x=x/spf[x];ct++;
    // }
    // sort(z.begin(),z.end());
    // for(auto g:z) cout<<g<<"\n";
    // cout<<"Lets gooo\n"<<ct;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;t=1;
    while(t--){
        solve();
    }
} 