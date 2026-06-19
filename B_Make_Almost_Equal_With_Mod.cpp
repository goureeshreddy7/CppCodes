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
        ll m20=-1,m21=-1;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) m20=1;
            if(a[i]%2==1) m21=1;
        }
        if(m21==m20){
            cout<<2<<"\n";
        }else{
            cout<<3<<"\n";
        }

    }
    
}