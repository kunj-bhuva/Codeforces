#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
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

// Additional macros for printing and input
#define printv(v)         \
    for (auto i : v)      \
        cout << i << ' '; \
    cout << endl;
#define ip(a, n)                \
    for (int i = 0; i < n; i++) \
    {                           \
        int xvyz;               \
        cin >> xvyz;            \
        a.push_back(xvyz);      \
    }

ll helper(vii suff, ll to_find, ll left)
{
    ll ans = -1;
    ll right = suff.size() - 1;
    while (left <= right)
    {
        ll mid = (right + left) / 2;
        if (suff[mid] >= to_find)
        {
            left = mid + 1;

            ans = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}
void solve()
{
    ll n, m, v;
    cin >> n >> m >> v;
    vi a;
    ip(a, n);
    vii pref(n, 0), suff(n, 0);
    ll cnt = 0;
    if (a[0] >= v)
        pref[0] = 1;
    else
        cnt += a[0];
    vii sums(n, 0);
    sums[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (cnt + a[i] >= v)
        {

            pref[i] = pref[i - 1] + 1;
            cnt = 0;
        }
        else
        {
            cnt += a[i];
            pref[i] = pref[i - 1];
        }
        sums[i] = a[i] + sums[i - 1];
    }

    cnt = 0;

    if (a[n - 1] >= v)
        suff[n - 1] = 1;
    else
        cnt += a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (cnt + a[i] >= v)
        {

            suff[i] = suff[i + 1] + 1;
            cnt = 0;
        }
        else
        {
            cnt += a[i];
            suff[i] = suff[i + 1];
        }
    }
    // printv(suff);
    // printv(pref);

    ll maxi = -1;
    if (suff.front() < m && pref.back() < m)
        return void(cout << -1 << endl);

    for (ll i = 0; i < n; i++)
    {
        ll prev_done = 0;

        if (i == 0)
            prev_done = 0;
        else
            prev_done = pref[i - 1];
        ll last_find = 0;
        if (m - prev_done > 0)
        {
            // last_find = helper(suff, m - prev_done, i);
            ll to_find=m - prev_done;
            ll left=i;
            ll ans1 = -1;
            ll right = suff.size() - 1;
            while (left <= right)
            {
                ll mid = (right + left) / 2;
                if (suff[mid] >= to_find)
                {
                    left = mid + 1;

                    ans1 = mid;
                }
                else
                {
                    right = mid - 1;
                }
            }
            last_find=ans1;
        }
        else
        {
            last_find = n;
        }
        if (last_find == -1)
            continue;

        last_find--;
        ll ans = 0;

        if (last_find == -1)
            ans = 0;
        else if (i == 0)
            ans = sums[last_find];
        else
            ans = sums[last_find] - sums[i - 1];
        maxi = max(maxi, ans);
    }
    if (maxi == -1)
    {
        cout << "-1" << endl;
        return;
    }
    cout << maxi << endl;
    return;
}
// Main function and template
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}