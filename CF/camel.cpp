#include <bits/stdc++.h>
using namespace std;
typedef int ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        string s;cin>>s;
        vector<char> v;
        ll n=s.length();
        v.push_back(tolower(s[0]));
        for(ll i=1;i<n;i++){
            if(int(s[i])>96){
                v.push_back(s[i]);
            }else{
                v.push_back('_');
                v.push_back(char(int(s[i])+32));
            }
        }
        for(ll i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<"\n";
    }


}