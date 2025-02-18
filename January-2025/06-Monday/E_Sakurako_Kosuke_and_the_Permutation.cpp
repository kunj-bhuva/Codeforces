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

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
 
    int ans = 0;
    vector<int> chk(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (chk[i])
            continue;
 
        int j = p[i];
        int cnt = 1;
        while (j != i) {
            chk[j] = 1;
            j = p[j];
            cnt++;
        }
        chk[i] = 1;
 
        if (cnt <= 2)
            continue;
        ans += (cnt - 1) / 2;
    } // O(n)
 
    cout << ans << '\n';
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}