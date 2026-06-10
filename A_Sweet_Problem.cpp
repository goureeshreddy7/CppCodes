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
        vl a(3);
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(),a.end());
        if(a[2]>=a[1]+a[0]){
            cout<<a[1]+a[0]<<"\n";
        }else{
            cout<<(a[1]+a[2]+a[0])/2<<"\n";
        }
    }
    
}