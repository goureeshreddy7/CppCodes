#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,b,x,y;
    cin>>a>>b>>x>>y;

    ll gcd1=gcd(x,y);
    x=x/gcd1;
    y=y/gcd1;
    cout<<min(a/x,b/y);
    // ll l=1,r=1e18;
    // ll mid=(r-l)/2;
    // while(l<=r){
    //     x=x*mid;y=y*mid;
    //     ll p=x*(mid-1),q=y*(mid-2);
    //     if(x*b!<=y*a&&p*b<=q*a){
    //         cout<<mid-1;
    //         break;
    //     }else{
    //         if()
    //     }
    // }    
}


// doning lot of blaa blaaa things 
// but its all gcd thats it 
// but i am actully doing with binary search okye simple  done !