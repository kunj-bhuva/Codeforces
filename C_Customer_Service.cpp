#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define start(t) t.begin(),t.end()
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()


{
    int n;
    cin >> n;
    
    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<int>> suff(n, vector<int>(n, 0));
    unordered_map<int, vector<int>> mp;

    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Build suffix sum and map
    for (int i = 0; i < n; i++) {
        suff[i][n - 1] = a[i][n - 1];
        if (suff[i][n - 1] == 1) mp[1].push_back(i);
    }

    for (int i = 0; i < n; i++) {
        for (int j = n - 2; j >= 0; j--) {
            suff[i][j] = a[i][j] + suff[i][j + 1];
            if (suff[i][j] == n - j) {
                mp[n - j].push_back(i);
            }
        }
    }

    
    
    return ;
}

// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}