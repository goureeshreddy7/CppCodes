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
        ll k=n*(n-1)/2;
        // unordered_set<ll> st;
        vl a(k);
        ll mx=LLONG_MIN;
        for(ll i=0;i<k;i++){
            cin>>a[i];
            if(mx<a[i]) mx=a[i];
            // if(mn>a[i]) mn=a[i];
        }
        sort(a.begin(),a.end());
       ll step=n-1,idx=0;
        while(idx<k){
            cout<<a[idx]<<" ";
            idx+=step;
            step--;
        }
        cout<<mx<<" "<<"\n";
    }
    
}