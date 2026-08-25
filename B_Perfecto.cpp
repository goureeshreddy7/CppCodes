#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

bool issqr(ll num){
    ll root=sqrt(num);
    return root*root==num;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        if(issqr(n*(n+1)/2)){
            cout<<-1<<"\n";
            continue;
        }
        vl a(n);
        ll sum=0;
        for(ll i=0;i<n;i++) a[i]=i+1;
        for(ll i=0;i<n;i++){
            if(issqr(a[i]+sum)){
                swap(a[i],a[i+1]);
            }
            sum+=a[i];
        }
        for(ll i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
} 