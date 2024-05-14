#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a;
        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            a.push_back(p);
        }

        sort(a.begin(), a.end());

        int i = a[0];
        int k = a[1];
        int j = a[n - 2];
        int l = a[n - 1];

        ll ans = abs(i - j) + abs(j - k) + abs(k - l) + abs(l - i);

        // Output the result based on the problem requirements
        cout << ans << endl;
    }
    return 0;
}
