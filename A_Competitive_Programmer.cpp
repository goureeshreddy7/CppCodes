#include <bits/stdc++.h>
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
        string s;cin>>s;
        ll sum=0,z=0,e=0;

        for(ll i=0;i<s.length();i++){
            ll k=s[i]-'0';
            sum+=k;
            if(k==0)z++;
            if(k%2==0)e++;
        }
        if(z>=1&&e>=2&&sum%3==0)cout<<"red\n";
        else cout<<"cyan\n";
    }
}