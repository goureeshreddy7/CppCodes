#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        vl a(n);
        ll len=0;
        for(ll i=0;i<n;i++){
            string s;cin>>s;
            ll ct=0;
            len+=s.length();
            for(ll j=s.length()-1;j>-1;j--){
                if(s[j]=='0') ct++;
                else break;
            }
            a[i]=ct;
        }
        sort(a.rbegin(),a.rend());
        ll sub=0;
        for(ll i=0;i<a.size();i+=2){
            sub+=a[i];
        }
        if(len-sub>=m+1) cout<<"Sasha\n";
        else cout<<"Anna\n";

    }
} 