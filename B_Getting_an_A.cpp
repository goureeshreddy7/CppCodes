#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    vl a(n);
    double sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum>=(4.5*n)){
        cout<<0;
    }else{
        double rqsum=(4.5)*n;
        double rem=rqsum-sum;
        sort(a.begin(),a.end());
        ll z=0;
        while(rem>0&&a[z]<5){
            rem-=(5-a[z]);
            z++;
            if(rem<=0){
                cout<<z;
                return 0;
            }
        }
    }
    
}