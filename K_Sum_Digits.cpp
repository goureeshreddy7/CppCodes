#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
void solve(){
    int size = 0;
    cin>>size;
    int n;
    
    cin>>n;
    int sum = 0;
    while ( n != 0){
        int dig = n % 10;
        n = n / 10;
        sum += dig;
    }
    cout<<sum;
   
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
}