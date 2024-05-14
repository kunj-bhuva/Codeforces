#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define SORT(t) sort(t.begin(),t.end()) // Corrected the macro name for sorting
#define PB(x) push_back(x)
#define PPB(x) pop_back(x)
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define NA cout << "NO" << endl
#define HA cout << "YES" << endl
#define NA cout << "No" << endl
#define HA cout << "Yes" << endl

// Additional macros for printing and input
#define PRINTV(v) for(auto i : v) cout << i << ' '; cout << endl;
#define IP(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.PB(xvyz); }

int f(const vector<int>& a, int d, vector<int>& dp, int i) {
    if (i == 0) {
        return 1;
    }
    if (dp[i] != -1) {
        return dp[i];
    }

    int minCost = INT_MAX;

    for (int j = 1; j <= d && i - j >= 0; ++j) {
        int cost = f(a, d, dp, i - j);

        minCost = min(minCost, cost + a[i]);
    }

    dp[i] = minCost;
    return minCost;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m, k, d;
        cin >> n >> m >> k >> d;
        vi ans;

        vector<vector<int>> a(n, vi(m, 0)); // Corrected vector initialization
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> a[i][j];
                a[i][j]++;
            }
        }

        for (int i = 0; i < n; i++) {
            vector<int> dp(m, -1);
            ans.PB(f(a[i], d, dp, m - 1));
        }
        PRINTV(ans);
    }
    return 0;
}
