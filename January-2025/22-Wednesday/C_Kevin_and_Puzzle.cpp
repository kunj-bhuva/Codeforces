#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <queue>
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
using namespace std;
using vpi = vector<pair<int, int>>;
using pi = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
const int inf = 9e18;
const int mod = 998244353;
const int NUM = 1000030;
const int N = 10000000;
#define DEBUG(x) cerr << #x << ": " << x << '\n'
template <typename T, typename Y>
istream &operator>>(istream &is, pair<T, Y> &p)
{
    is >> p.first >> p.second;
    return is;
}
template <typename T, typename Y>
ostream &operator<<(ostream &os, pair<T, Y> p)
{
    os << p.first << ' ' << p.second << ' ';
    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v)
{
    for (auto &i : v)
        is >> i;
    return is;
}
template <typename T>
ostream &operator<<(ostream &os, vector<T> v)
{
    for (auto &i : v)
        os << i << ' ';
    return os;
}

ll dp[200005][2];
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
        dp[i][0] = dp[i][1] = 0;
    }
    if (n == 1)
    {
        if (v[0] == 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
        return;
    }
    map<vi, ll> odp;
    if (v[0] != 0)
    {
        dp[1][1] = 1;
        odp[{1, 1}] = 1;
    }
    else
    {
        dp[0][0] = 1;
        dp[1][1] = 1;
        odp[{0, 0}] = 1;
        odp[{1, 1}] = 1;
    }
    for (ll i = 1; i < n; i++)
    {
        map<vi, ll> ndp;
        // i is honest
        // dp[v[i]][0] = (dp[v[i]][0] + dp[v[i] - 1][1]) % mod;
        ndp[{v[i], 0}] = (odp[{v[i], 0}] + odp[{v[i], 1}]) % mod;
        // i is liar
        // dp[v[i - 1] + 1][1] = dp[v[i - 1]][0];
        ndp[{v[i - 1] + 1, 1}] = odp[{v[i - 1], 0}];
        odp = ndp;
    }
    // DEBUG((dp[v[n - 2] + 1][1] + dp[v[n - 1]][0]) % mod);
    // cout << (dp[v[n - 2] + 1][1] + dp[v[n - 1]][0]) % mod << endl;
    // DEBUG((odp[{v[n - 2] + 1, 1}] + odp[{v[n - 1], 0}]) % mod);
    cout << (odp[{v[n - 2] + 1, 1}] + odp[{v[n - 1], 0}]) % mod << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}