#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, x;
        cin >> n >> x;
        long long c = 0;

        for (long long i = x; i <= n; i += (x == 1 ? 1 : 2)) {
            if (i == 1) {
                if (n % 2 == 1 && x == 0) {
                    c++;
                }
            } else {
                long long d = n % (2 * i - 2);
                if (d <= i && x == d) c++;
                else if (d > i && (2 * i - d) == x) c++;
            }
        }

        cout << c << endl;
    }
    return 0;
}
