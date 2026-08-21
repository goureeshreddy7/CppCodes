#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    ll p=1;
    while(n>1){
        if(n%2!=0){
            p=0;
            break;
        }
        n/=2;
    }
    if(p) cout<<"YES";
    else cout<<"NO";
}