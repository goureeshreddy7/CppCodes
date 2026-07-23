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
        ll a,b,x;
        cin>>a>>b>>x;
        ll mnum=0;
        while(a!=b){
            if(abs(a-b)==1){
                mnum++;
                if(a>b) b++;
                else a++;
            }
            else if(a>b){
                a/=x;
                mnum++;
            }
            else if(b>a){
                b/=x;
                mnum++;
            }
            
        }
        cout<<mnum<<"\n";
    }
    
}