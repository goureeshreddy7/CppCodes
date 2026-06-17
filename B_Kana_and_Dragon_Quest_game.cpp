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
        ll x,n,m;cin>>x>>n>>m;
        while(x>=20&&n>0){
            x=x/2+10;
            n--;
        }
        while(x>0&&m>0){
            x=x-10;
            m--;
        }
        if(x<=0) cout<<"YES\n";
        else cout<<"NO\n";
    }   
}

//checking limitaton of qn really really help alot 
//like m and n can max go upto 30 was so critical to me which is why i end up 
//looping else i am so agresivly thing o(1);
// anyways 
//formula waS but not still comlete okye exam time let us think it later byeee!! 
//(x+alp*20)/2^apl 
