#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
typedef vector<int> vi;

void solve() {
    int n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Coordinate Compression
    vll sorted_a = a; // Copy of the original array
    sort(sorted_a.begin(), sorted_a.end());
    unordered_map<ll, int> coord_map;
    for (int i = 0; i < n; i++) {
        coord_map[sorted_a[i]] = i;
    }

    // Count unique groups based on compressed indices
    int cnt = 1;
    for (int i = 0; i < n - 1; i++) {
        int current_index = coord_map[a[i]];
        int next_index = coord_map[a[i + 1]];
        if (abs(next_index - current_index) != 1) {
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
