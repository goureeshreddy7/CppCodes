#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
ll sum(ll n){
    return n*(n+1)/2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,b;cin>>a>>b;
    if(a>b) swap(a,b);

    cout<<sum(b)-sum(a-1)<<endl;
    cout<<(sum(b/2)-sum(((a+1)/2)-1))*2<<endl;
    cout<<(sum(b)-sum(a-1))-((sum(b/2)-sum(((a+1)/2)-1))*2);
}