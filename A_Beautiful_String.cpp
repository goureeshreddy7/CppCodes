#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        string s;cin>>s;
        ll n=s.length();
        for(ll i=0;i<n;i++){
            if(s[i]=='?'){
                if((i==0||s[i-1]!='a')&&(i==n-1||s[i+1]!='a')){
                    s[i]='a';
                }else if((i==0||s[i-1]!='b')&&(i==n-1||s[i+1]!='b')){
                    s[i]='b';
                }else{
                    s[i]='c';
                }
            }
        }
        bool t=true;
        for(ll i=0;i<n-1;i++){
            if(s[i]==s[i+1]) t=false;
        }
        if(t)cout<<s<<"\n";
        else cout<<-1<<"\n";
    }
}