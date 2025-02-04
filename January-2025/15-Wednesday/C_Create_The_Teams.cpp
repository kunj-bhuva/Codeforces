#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Sort in descending order
        sort(a.rbegin(), a.rend());

        int res = 0, cur = 1;
        for (int s : a) {
            if (s * cur >= x) {
                ++res;
                cur = 0;
            }
            ++cur;
        }
        cout << res << endl;
    }

    return 0;
}
