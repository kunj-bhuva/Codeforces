#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using vii = vector<lli>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        lli n;
        cin >> n;
        vii a(n);
        for (auto &i : a) cin >> i;

        auto minPos = min_element(a.begin(), a.end());
        if (is_sorted(minPos + 1, a.end())) {
            cout << distance(a.begin(), minPos) << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
