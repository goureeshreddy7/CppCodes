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
        ll n;cin>>n;
        vl a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll l=0,r=n-1;
        vl v;
        while(l<=r){
            if(l==r){
                v.push_back(a[l]);
                break;
            }
            v.push_back(a[r]);
            v.push_back(a[l]);
            l++;r--;
        }
        for(ll i=n-1;i>-1;i--){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    
}
//done all right just getting out of bound error
//whenerve i am geeting odd no.s that i ignored while typing 
//yaa whatever lets see now what judge(my love) say
