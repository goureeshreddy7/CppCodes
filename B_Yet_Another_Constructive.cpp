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
        ll n,k,m;cin>>n>>k>>m;
        if(k>m){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(ll i=0;i<n;i++){
                if((i+1)%k==0){
                    cout<<m-k+1<<" ";
                }
                else{
                    cout<<1<<" ";
                }
            }
            cout<<"\n";
        }
    }
}
// here the cacheee is putt all 1 andm rest finish with rest no. for 1 place of k 
// good instint  