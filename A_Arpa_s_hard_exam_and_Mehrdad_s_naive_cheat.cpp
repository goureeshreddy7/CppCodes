#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

void solve(){
    ll n;cin>>n;
    if(n==0) cout<<1;
    else if(n%4==1) cout<<8;
    else if(n%4==2) cout<<4;
    else if(n%4==3) cout<<2;
    else if(n%4==0) cout<<6; 
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t=1;
    while(t--){
        solve();
    }
} 