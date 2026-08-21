// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef vector<long long> vl;
// typedef pair<int,int> pi;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;cin>>t;
//     while(t--){
//         ll n;cin>>n;
//         vl a(n);
//         for(ll i=0;i<n;i++){
//             cin>>a[i];
//         }
//         sort(a.begin(),a.end());
//         ll lastidx=-1,last=0,frq=0;
//         ll cursum=0,lastsum=0;
//         for(ll i=1;i<n;i++){
//             if(a[i]==a[i-1]){
//                 frq++;
//                 cursum+=a[i];
//             }
//             else{
//                 cursum+=a[i];
//                 ll k=(cursum-lastsum)%frq;
//                 if(k==0){
//                     while(frq--){
//                         a[i-frq]=k;
//                         lastsum+=k;
//                         last=k;

//                     }
//                 }else{
//                     cout<<-1<<"\n";
//                 }
//                 lastidx=i;
//             }
//         }
//         for(ll i=n-1;i>n-lastidx-1;i--){
//             a[i]=last+1;
//         }
//         for(ll i=0;i<n;i++){
//             cout<<a[i]<<" ";
//         }
//         cout<<"\n";
//     }


// }



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<ll,ll> pl;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<pl> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a.begin(),a.end());
        if(a[0].first!=0){
            cout<<-1<<"\n";
            continue;
        }
        ll last=0,frq=1,pos=1;
        vl ans(n);
        for(ll i=1;i<n;i++){
            if(a[i].first==a[i-1].first){
                frq++;
            }else{
                ll df=a[i].first-a[i-1].first;
                if(df%frq!=0){
                    pos=0;break;
                }
                ll k=df/frq;
                if(k<=last){
                    pos=0;break;
                }
                for(ll j=1;j<=frq;j++){
                    ans[a[i-j].second]=k;
                }
                last=k;
                frq=1;
            }
        }
        if(pos){
            ll k=last+1;
            for(ll j=1;j<=frq;j++){
                ans[a[n-j].second]=k;
            }
            for(ll i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
}