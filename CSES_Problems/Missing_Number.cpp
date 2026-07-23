#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    vl a(n+1,0);
    for(ll i=1;i<n;i++){
        ll x;
        cin>>x;a[x]=1;
    }
    for(ll i=1;i<=n;i++){
        if(a[i]==0){
            cout<<i;
        }
    }
}