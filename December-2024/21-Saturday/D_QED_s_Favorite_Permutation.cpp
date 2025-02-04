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

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> perm(n);
    for (int i = 0; i < n; i++)
        cin >> perm[i];

    for (int i = 0; i < n; i++)
        perm[i]--;

    

    vector<int> diffArr(n,0);
    for (int i = 0; i < n; i++)
    {
        diffArr[i]=perm[i]-i;
    }
    for (int i = 1; i < n; i++)
        diffArr[i] += diffArr[i - 1];

    string s;
    cin >> s;
    set<int> problems;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'L' && s[i + 1] == 'R' && diffArr[i] != 0)
        {
            problems.insert(i);
        }
    }
    while (q--)
    {
        int x;
        cin >> x;
        x--;
        if (s[x] == 'L')
        {
            s[x] = 'R';
        }
        else
        {
            s[x] = 'L';
        }

        if (s[x - 1] == 'L' && s[x] == 'R' && diffArr[x - 1] != 0)
        {
            problems.insert(x - 1);
        }
        else
        {
            problems.erase(x - 1);
        }


        if (s[x] == 'L' && s[x + 1] == 'R' && diffArr[x] != 0)
        {
            problems.insert(x);
        }
        else
        {
            problems.erase(x);
        }

        
        if (problems.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
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