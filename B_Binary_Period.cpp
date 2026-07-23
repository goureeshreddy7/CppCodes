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
        string s;cin>>s;
        ll n1=0,n0=0;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='1') n1++;
            else n0++;
        }
        if(n1==s.length()){
            cout<<s<<"\n";
        }else if(n0==s.length()){
            cout<<s<<"\n";
        }else{
            for(ll i=0;i<s.length();i++){
                cout<<"01";
            }
            cout<<"\n";
        }
    }
    
}

//may be its easy i spontaniouslly spoted this 
//that if it contains only one or only zero any how ans will be t it self
//and else it must have pattern of 010101 or 101010....
//actully i got this bcz of condn given that it must min recurance and subsquence property 
//that i read qn well 
//al solved simple error yaar !! that make me bit time consuing any how now i am sort 
// hope this will get accepted
