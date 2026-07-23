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
        vl mking(n+1,0);
        vl mqueen(n+1,0);
        for(ll i=1;i<=n;i++){
            ll k;cin>>k;
            for(ll j=0;j<k;j++){
                ll x;
                cin>>x;
                if(mking[x]==0&&mqueen[i]==0){
                    mking[x]=1;
                    mqueen[i]=1;
                }
            }
        }
        ll ik=-1,iq=-1;
        for(ll i=1;i<=n;i++){
            if(mqueen[i]==0) iq=i;
            if(mking[i]==0) ik=i;
        }
        if(iq==-1){
            cout<<"OPTIMAL\n";
        }else{
            cout<<"IMPROVE\n";
            cout<<iq<<" "<<ik<<"\n";
        }
    }
}