#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;cin>>n;
    stack<ll> s;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;t=1;
    while(t--) solve();
}