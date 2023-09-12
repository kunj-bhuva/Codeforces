#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll m = n * (n - 1) / 2;
        map<ll, ll> mp;
        ll a[m];
        for (int i = 0; i < m; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll s = n - 1;
        int j = 0;
        vector<ll> ans;
        ll ma = 0;
        for (auto i : mp) {
            ma = max(ma, i.first);
            if (j == 0) {
                ans.push_back(i.first);
                j++;
            }
            else if (i.second % 2 == 0) {
                int d = i.second / 2;
                while (d--) {
                    ans.push_back(i.first);
                }
            } else {
                int d = (i.second ) / 2;
                while (d--) {
                    ans.push_back(i.first);
                }
            }
        }
        ans.push_back(ma + 1);
        while (ans.size() < n) {
            ans.push_back(ma);
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
