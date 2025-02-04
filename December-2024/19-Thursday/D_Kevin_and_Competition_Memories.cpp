#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
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

void solve()
{
    int n, m;
        int kevinRating;
        cin >> n >> m >> kevinRating;
        vector<int> ratings;
        for (int j = 1; j < n; j++) {
            int rating;
            cin >> rating;
            ratings.push_back(-rating);
        }
        map<int, int> ranks;
        ranks[1 << 30] = 1;
        sort(ratings.begin(), ratings.end());
        for (int j = 0; j < n - 1; j++) {
            int rating = -ratings[j];
            ranks[rating] = j + 2;
        }
        vector<int> difficulties;
        for (int j = 0; j < m; j++) {
            int difficulty;
            cin >> difficulty;
            if (difficulty > kevinRating) {
                difficulties.push_back(difficulty);
            }
        }
        sort(difficulties.begin(), difficulties.end());
        for (int k = 1; k <= m; k++) {
            //cout << "((( k = " << k << endl;
            long long answer = 0;
            for (int firstProblem = m % k; firstProblem < m; firstProblem += k) {
                //cout << "firstProblem = " << firstProblem << endl;
                if (firstProblem >= difficulties.size()) {
                    //cout << "\tpast" << endl;
                    answer++;
                } else {
                    int difficulty = difficulties[firstProblem];
                    auto it = ranks.lower_bound(difficulty);
                    answer += (long long) it->second;
                    //cout << "\tdifficulty = " << difficulty << ", found = (" << it->first << ", " << it->second << ")" << endl;
                }
            }
            cout << answer << ' ';
        }
        cout << '\n';
    
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}