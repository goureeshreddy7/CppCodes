#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;
bool goodcheck(int a){
    set<ll> s;
    while(a!=0){
        s.insert(a%10);
        a/=10;
    }
    if(s.size()<3) return 1;
    else return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll x;cin>>x;
        ll y=2;
        while(y<=1e9){
            if(goodcheck(x*y)){
                cout<<y<<"\n";
                break;
            }
        }
    }
    
}