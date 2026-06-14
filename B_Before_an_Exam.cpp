#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll d,sumt;
    cin>>d>>sumt;
    vl mn(d),mx(d);
    ll mnsum=0,mxsum=0;
    
    for(ll i=0;i<d;i++){
        cin>>mn[i]>>mx[i];
        mnsum+=mn[i];
        mxsum+=mx[i];
    }
    if(mnsum>sumt||mxsum<sumt){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
        vl ans=mn;
        ll rem=sumt-mnsum;
        for(ll i=0;i<d;i++){
            ll add=min(rem,mx[i]-mn[i]);
            ans[i]+=add;
            rem-=add;
        }
        for(ll i=0;i<d;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}