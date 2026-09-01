#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;


ll binpowmd(ll a,ll b){
    if(b==0) return 1%7;
    if(b%2==1){
        return ((a%7)*binpowmd(a,b-1))%7;
    }else {
        ll temp=(binpowmd(a,b/2))%7;
        return (temp*temp)%7;
    }
}
void solve(){
    
    ll a,b;cin>>a>>b;
    cout<<(binpowmd(a,b));

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;t=1;
    while(t--){
        solve();
    }
} 