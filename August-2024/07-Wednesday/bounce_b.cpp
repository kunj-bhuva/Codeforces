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
#define ip(a, n) for(int i = 0; i < n; i++) { long xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    int n;
    cin >> n;
    vector<long> a(n);

    long tot = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        tot += a[i];
    }

    long sm = 0;
    long cnt = 0;
    for(int i = 0; i < n; i++) 
    {
        if(a[i] == 0) {
            if(abs(sm - tot) == 1) {
                cnt++;
            }
            if(abs(sm - tot) == 0) cnt += 2;
        }
        tot -= a[i];
        sm += a[i];
    }

    cout << cnt << endl;
    return;
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}