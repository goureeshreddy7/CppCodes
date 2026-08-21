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
        ll  n;cin>>n;
        string a,b;cin>>a>>b;
        ll ae=0,ao=0,be=0,bo=0;
        for(ll i=0;i<n;i++){
            if(i%2==0){
                if(a[i]=='1') ao++;
                if(b[i]=='1') bo++;
            }
            else{
                if(a[i]=='1') ae++;
                if(b[i]=='1') be++;
            }
        }
        if(ae==be&&ao==bo) cout<<"YES\n";
        else cout<<"NO\n";
        
       
    }


}