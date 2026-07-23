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

        ll asum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            asum+=a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        ll msum=0;
        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]){
                msum+=a[i];
            }
        }
        
        if(a==b){
            cout<<0<<"\n";
        }
        else if(asum==0){
            cout<<-1<<"\n";
        }
        else{
            if(msum%2==0){
                cout<<2<<"\n";
            }else{
                cout<<1<<"\n";
            }
        }
    }
}