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
        string s;cin>>s;
        if(s[0]<s[1]){
            cout<<((s[0]-'a')*25)+(s[1]-'a')<<"\n";
        }else{
            cout<<((s[0]-'a')*25)+(s[1]-'a')+1<<"\n";
        }
    }
} 