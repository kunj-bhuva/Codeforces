#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using pii = pair<int, int>;

int main() {
    int t; cin >> t;
    try {
        while (t--) {
            int n; cin >> n;
            vector<pii> a;
            for (int i = 0; i < n; ++i) {
                int x; cin >> x;
                a.push_back({x, i});
            }
            sort(a.begin(), a.end());
            ll sum = 0;
            vector<pair<int, int>> ans;
            int last = 0;
            for (int i = 0; i < n; ) {
                ll aa = i;
                ll temp = sum + a[i].first;
                int l = i;
                while (l + 1 < n && temp >= a[l + 1].first) {
                    l++;
                    temp += a[l].first;
                }
                sum += a[i].first;
                ans.push_back({a[i].second, aa});
                for (int k = i; k <= l; k++) {
                    ans.push_back({a[k].second, aa});
                }
                i = l + 1;
            }
            sort(ans.begin(), ans.end());
            for (int i = 0; i < n; i++) {
                cout << ans[i].second << " ";
            }
            cout << endl;
        }
    } catch (const std::bad_alloc& e) {
        cerr << "Memory allocation failed: " << e.what() << endl;
    } catch (...) {
        cerr << "An unexpected error occurred." << endl;
    }
    return 0;
}
