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
        vl a(5);
        for(ll i=0;i<5;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a[1]>=30&&a[3]>=60){
            cout<<"Pass\n";
        }else{
            cout<<"Fail\n";
        }
    }


}