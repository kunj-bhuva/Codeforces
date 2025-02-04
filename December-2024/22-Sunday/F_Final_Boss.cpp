#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve(){
    ll h, n;
    cin >> h >> n;

    vector<ll> A(n), C(n);

    for (ll &i : A)
        cin >> i;
    for (ll &i : C)
        cin >> i;
    
    auto chk = [&](ll t){
        ll dmg = 0;
        for (int i = 0; i < n and dmg < h; i++){
            ll cnt = (t - 1) / C[i] + 1;

            if (cnt >= h)
                return true;

            dmg += cnt * A[i];
        }
        return dmg >= h;
    };

    ll L = 1, H = 1e12;

    while (L < H){
        ll M = (L + H) / 2;
        chk(M) ? H = M : L = M + 1;
    }
    cout << L << "\n";
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}