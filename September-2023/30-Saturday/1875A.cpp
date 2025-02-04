#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vi a(n), b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (k %2==1) {
            if (a[0] < b[m - 1]) {
                a[0] = b[m - 1];
            }
        } else {
            if (a[0]>b[m-1]) {
                a[n - 1] = b[0];
            }
        }

        ll s = 0;
        for (int i = 0; i < n; i++) {
            s += a[i];
        }
        cout << s << endl;
    }
    return 0;
}
