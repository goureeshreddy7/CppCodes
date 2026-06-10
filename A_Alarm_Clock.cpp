#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){

        ll a,b,c,d;cin>>a>>b>>c>>d;

        if(b>=a){
            cout<<b<<"\n";
        }else if(c<=d){
            cout<<"-1\n";
        }else{
            ll rem=a-b;
            ll net=c-d;
            ll cycles=(rem+net-1)/net;
            cout<<b+(cycles*c)<<"\n";
        }
    }
}