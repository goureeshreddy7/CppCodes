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
        ll n;cin>>n;
        // vl a(n);
        ll a=INT_MAX,b=INT_MAX;
        ll penl=0;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            // cin>>a[i];
            if(x>a&&x>b){
                penl++;
                if(a<b) a=x;
                else b=x;
            }else if(x>a&&x<=b){
                b=x;
            }else if(x>b&&x<=a){
                a=x;
            }else {
                if(a<b) a=x;
                else b=x;
            }

        }
        cout<<penl<<"\n";
    }
} 