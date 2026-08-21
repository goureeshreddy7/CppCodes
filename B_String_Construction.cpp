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
        ll n,k;cin>>n>>k;
        if(n%2==0){
            if(k<=n-2&&k%2==0){
                


            }else{
                cout<<"-1\n";
            }
        }else{
            if(k%2!=0&&k<=n-2){




            }else{
                cout<<"-1\n";
            }
        }
    }
}