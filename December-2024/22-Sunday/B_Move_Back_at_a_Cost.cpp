    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef vector<long long int> vii;
    typedef vector<int> vi;

    // Macro definitions
    #define sort(t) sort(t.begin(),t.end())
    #define pb(x) push_back(x)
    #define ppb(x) pop_back(x)
    #define fi(i, a, b) for (ll i = a; i < b; i++)
    #define Na cout << "NO" << endl
    #define Ha cout << "YES" << endl
    #define na cout << "No" << endl
    #define ha cout << "Yes" << endl

    // Additional macros for printing and input
    #define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
    #define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }
    #include<set>
    void solve() {
        int n, currIdx = 0;
        cin >> n;

        multiset<pair<int, int>> ms;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ms.insert({x, i});
        }

        while (!ms.empty()) {
            pair<int, int> element = *ms.begin();
            int value = element.first;
            int index = element.second;
            ms.erase(ms.begin());  // Remove the smallest element

            if (index == n || index >= currIdx) {
                cout << value << " ";
                currIdx = index;
            } else {
                ms.insert(std::make_pair(value + 1, n));  // Insert updated pair
            }
        }

        cout << "\n";
    }

    // Main function and template
    int main() {
        int t; cin >> t;
        while(t--) {
            solve();
        }
        return 0;
    }