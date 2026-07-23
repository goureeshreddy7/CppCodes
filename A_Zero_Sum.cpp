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
        // vl a(n);
        ll a=0,b=0;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x>0) a++;
            else b++;
        }
        if(n%2==0){
            if(a==n||b==n){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }
        else cout<<"NO\n";

    }


}