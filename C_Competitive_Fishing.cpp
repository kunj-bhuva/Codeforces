#include <bits/stdc++.h>

using namespace std;

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);


#define int long long

void CoderAbhi27() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> vec;
    int x = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1')
            x++;
        else
            x--;
        if (i > 0)
            vec.push_back(x);
    } // n
    int sum = 0;
    sort(vec.rbegin(), vec.rend()); // nlogn
    int ans = 1;
    for (auto i : vec) {
        sum += i;
        ans++;
        if (sum >= k) {
            cout << ans << '\n';
            return;
        }
    } // n
    cout << "-1\n";
}

// tc -> O(nlogn)
// sc -> O(n)

int32_t main() {
    fastIO;

    int t = 1;
    cin >> t;
    while (t--) {
        CoderAbhi27();
    }
    return 0;
}