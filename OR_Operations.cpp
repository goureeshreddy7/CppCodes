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
        ll to=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            to|=a[i];
        }
        ll co=0;
        ll ct=0;
        if(to==0){
            cout<<0<<"\n";
        }else{
            for(ll i=0;i<n;i++){
            co|=a[i];
            if(co==to){
                ct++;
                co=0;
            }
        }
        cout<<n-ct<<"\n";
        }
    }
    
}