#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<pair<int, int>, int> cnt;
        int ans = 0;
        for (int e : a) {
            int x1 = e % x;
            int y2 = e % y;
            pair<int, int> key = make_pair((x - x1) % x, y2);
            ans += cnt[key];
            cnt[make_pair(x1, y2)]++;

        }
        cout << ans << endl;

    }
    return 0;
}
