#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;cin>>s;
        ll c0=0,c1=0;
        for(char c:s){
            if(c=='0')c0++;
            else c1++;
        }
        if(abs(c0-c1)>2){
            cout<<"-1\n";continue;
        }
        ll b0=0,b1=0;
        for(ll i=0;i<n;){
            ll j=i;
            while(j<n&&s[j]==s[i])j++;
            if(s[i]=='0')b0++;
            else b1++;
            i=j;
        }
        ll mx=-1;
        for(ll d=-1;d<=1;d++){
            if(abs((c0-c1)-d)<=1){
                ll y=min(b1,b0-d);
                ll x=y+d;
                if(x>=0&&y>=0)mx=max(mx,x+y);
            }
        }
        if(mx==-1)cout<<"-1\n";
        else cout<<n-mx<<"\n";
    }
}