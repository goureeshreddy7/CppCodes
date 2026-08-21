#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    vl a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    bool k=1;
    ll l=0,r=n-1;
    while(l<=r){
        if(a[l]==a[r]){
            l++;r--;
        }
        else{
            k=0;
            break;
        }
    }
    if(k) cout<<"YES";
    else cout<<"NO";
}