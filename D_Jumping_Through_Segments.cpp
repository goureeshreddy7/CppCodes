#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

bool check(ll k, ll n, vl& l, vl& r) {
    ll L = 0, R = 0;
    for(ll i = 0; i < n; i++) {
        L = max(L - k, l[i]);
        R = min(R + k, r[i]);
        if(L > R) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vl l(n), r(n);
        for(ll i = 0; i < n; i++) {
            cin >> l[i] >> r[i];
        }
        
        ll low = 0, high = 1e9, ans = 1e9;
        
        while(low <= high) {
            ll mid = low + (high - low) / 2;
            
            if(check(mid, n, l, r)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << "\n";
    }
}