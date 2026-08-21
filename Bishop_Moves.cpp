#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        if((x1+y1)%2!=(x2+y2)%2)cout<<"-1\n";
        else if(abs(x1-x2)==abs(y1-y2))cout<<"1\n";
        else cout<<"2\n";
    }
}