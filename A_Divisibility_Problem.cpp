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
        ll a,b;cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }else{
            cout<<b-(a%b)<<endl;
        }
    }
    
}