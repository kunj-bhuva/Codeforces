#include <bits/stdc++.h>
#include <cmath> // For floor() and ceil()

using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Simplified macros for readability
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

void solve()
{
    ll k, l1, r1, l2, r2, ans = 0, pp = 1;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    while (pp <= r2 / l1)
    {
        ll upper_limit = min(r2 / pp, r1);
        ll lower_limit = max((l2 + pp - 1) / pp, l1);

        if (lower_limit <= upper_limit)
        {
            ans += upper_limit - lower_limit;
            ans++;
        }
        if (pp > r2 / k)
            break;

        pp *= k;
        
        if (k == 1)
            break;

        
    }

    cout << ans << endl;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }
    return 0;
}
