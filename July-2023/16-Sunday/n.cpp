#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isDull(vector<int> a, vector<int> b, int n) {
    unordered_set<vector<int>> visited;
    while (true) {
        if (visited.find(a) != visited.end()) {
            return true; // Found a repetitive pattern, arrays will become dull
        }
        visited.insert(a);

        bool allZeroes = true;
        for (int i = 0; i < n; i++) {
            int diff = abs(a[i] - b[i]);
            a[i] = b[i];
            b[i] = diff;
            if (diff != 0) {
                allZeroes = false;
            }
        }

        if (allZeroes) {
            return true; // All elements became zeroes, arrays are dull
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        bool dull = isDull(a, b, n);
        if (dull) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
