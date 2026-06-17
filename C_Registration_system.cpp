#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    map<string,ll>mp;
    for(ll i=0;i<n;i++){
        string s;cin>>s;
        if(mp[s]==0){
            cout<<"OK"<<"\n";
            mp[s]++;
        }else{
            ll k=mp[s];
            string st=to_string(k);
            cout<<s<<st<<"\n";
            mp[s]++;
        }
        
    }
}

// ll ct=count(v.begin(),v.end(),s);
//string st=to_string(ct); 
//converting to on  data type to other 

/// JAI JAI JAIIIIII Hasssshingggg huuuuuuyayyay!!!
//done dana done !! 