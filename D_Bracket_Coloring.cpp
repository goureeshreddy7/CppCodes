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
        ll n;cin>>n;
        string s;cin>>s;
        ll ct=0;
        ll allpos=1;
        ll allneg=1;
        ll cur=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='('){
                ct++;
                cur+=1;
            }
            else{
                ct--;
                cur-=1;
            }
            if(cur>0) allneg=0;
            if(cur<0) allpos=0;
            
        }
        if(ct!=0){
            cout<<-1<<"\n";
        }else{
            if(allpos||allneg){
                cout<<1<<"\n";
                for(ll i=0;i<n;i++)cout<<1<<" ";
                cout<<"\n";
            }else{
                cur=0;
                cout<<2<<"\n";
                for(ll i=0;i<n;i++){
                    if(s[i]=='('){
                        if(cur>=0) cout<<1<<" ";
                        else cout<<2<<" ";
                        cur++;
                    }else{
                        if(cur<=0) cout<<2<<" ";
                        else cout<<1<<" ";
                        cur--;
                    }
                }
                cout<<"\n";
            }



        }
    }
} 