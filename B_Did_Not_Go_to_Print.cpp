#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    vl st;
    vector<bool> p(n+1,false);
    for(ll i=1;i<=n;i++){
        if(s[i-1]=='1'){
            st.push_back(i);
        }else if(s[i-1]=='2'){
            if(!st.empty()){
                p[st.back()]=true;
                st.pop_back();
            }else{
                p[i]=true;
            }
        }else{
            p[i]=true;
        }
    }
    vl ans;
    for(ll i=1;i<=n;i++){
        if(!p[i]) ans.push_back(i);
    }
    cout<<ans.size()<<"\n";
    for(auto x:ans) cout<<x<<" ";
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        solve();
    }
}