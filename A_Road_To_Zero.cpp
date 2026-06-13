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
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        if(x<y) swap(x,y);
        ll tc=a*(x-y);

        if(2*a<b){
            tc+=2*a*(y);
        }else{
            tc+=b*(y);
        }
        cout<<tc<<"\n";
    }   
}
//i am feeling not good whatever 
//it does not matter bcz when iam happy that also dont
// i just need to solve 
//but honestly i am feeling bad bcz for long time i am solving only lowwer prbmd bcz of end exam .