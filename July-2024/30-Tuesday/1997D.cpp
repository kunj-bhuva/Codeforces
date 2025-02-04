#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define SORT(t) sort(t.begin(), t.end())
#define PB(x) push_back(x)
#define PPB(x) pop_back(x)
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define NA cout << "NO" << endl
#define HA cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl
#define PRINTV(v) for (auto i : v) cout << i << ' '; cout << endl
#define INPUT(a, n) for (int i = 0; i < n; i++) { int x; cin >> x; a.push_back(x); }

// Depth-first search function
void dfs(vector<int>& a, vector<vector<int>>& adj, int i) {
    if (adj[i].empty()) return;

    for (auto it : adj[i]) {
        dfs(a, adj, it);
    }

    int mini = INT_MAX;
    for (auto it : adj[i]) {
        mini = min(mini, a[it]);
    }

    if (i != 1) {
        a[i] = (a[i] < mini) ? (a[i] + mini) / 2 : mini;
    } else {
        a[i] += mini;
    }
}

// Solve function
void solve() {
    int n;
    cin >> n;
    vi a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int k;
        cin >> k;
        adj[k].PB(i + 2);
    }

    dfs(a, adj, 1);
    cout << a[1] << endl;
}

// Main function
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
