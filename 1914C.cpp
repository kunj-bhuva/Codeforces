#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_SIZE 200005

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<long long> a(n), b(n), mb(n);
        
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            std::cin >> b[i];
        }

        mb[0] = b[0];
        for (int i = 1; i < n; i++) {
            mb[i] = std::max(mb[i - 1], b[i]);
        }

        long long res = 0;
        long long tot = 0;
        for (int i = 0; i < std::min(k, n); i++) {
            tot += a[i];
            long long rem = k - (i + 1);
            long long cur = tot + rem * mb[i];

            res = std::max(res, cur);
        }

        std::cout << res << std::endl;
    }

    return 0;
}
