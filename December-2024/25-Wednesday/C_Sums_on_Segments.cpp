#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

#define printv(v) for (auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for (int i = 0; i < n; i++) { int x; cin >> x; a.push_back(x); }

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    fi(i, 0, n) cin >> a[i];

    ll special_index = -1;
    fi(i, 0, n) {
        if (a[i] != -1 && a[i] != 1)
            special_index = i;
    }

    ll min_prefix = 0, max_prefix = 0, sum = 0;
    ll max_neg_gap = 0, max_pos_gap = 0;

    if (special_index == -1) special_index = n;

    // Analyze prefix up to special_index
    fi(i, 0, special_index) {
        sum += a[i];
        min_prefix = min(min_prefix, sum);
        max_prefix = max(max_prefix, sum);
        max_neg_gap = min(max_neg_gap, sum - max_prefix);
        max_pos_gap = max(max_pos_gap, sum - min_prefix);
    }

    set<ll> result_set;
    if (special_index == n) {
        // Case when all elements are -1 or 1
        for (ll i = max_neg_gap; i <= 0; i++) result_set.insert(i);
        for (ll i = 0; i <= max_pos_gap; i++) result_set.insert(i);
        cout << result_set.size() << endl;
        for (auto it : result_set) cout << it << " ";
        cout << endl;
        return;
    }

    // Calculations for the range including the special element
    ll max_sum_to_left = sum - min_prefix, min_sum_to_left = sum - max_prefix;
    sum = 0;
    ll min_suffix = 0, max_suffix = 0;

    fi(i, special_index + 1, n) {
        sum += a[i];
        min_suffix = min(min_suffix, sum);
        max_suffix = max(max_suffix, sum);
        max_neg_gap = min(max_neg_gap, sum - max_suffix);
        max_pos_gap = max(max_pos_gap, sum - min_suffix);
    }

    ll left_bound = a[special_index] + min_sum_to_left + min_suffix;
    ll right_bound = a[special_index] + max_sum_to_left + max_suffix;

    // Populate result_set with all possible sums
    fi(i, max_neg_gap, 1) result_set.insert(i);
    fi(i, 0, max_pos_gap + 1) result_set.insert(i);
    fi(i, left_bound, right_bound + 1) result_set.insert(i);

    cout << result_set.size() << endl;
    for (auto i : result_set) cout << i << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
