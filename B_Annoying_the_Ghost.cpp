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
        vl a(n),b(n);
        ll a1=INT_MAX,b1=INT_MAX;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<a1) a1=a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<b1) b1=b[i];
        }
        if(b1<a1){
            cout<<-1<<"\n";
        }else{
            ll ct=0;
            ll z=0;
            for(ll i=0;i<n;i++){
                if(a[i]>b[i])
            }

        }
    }
    
}