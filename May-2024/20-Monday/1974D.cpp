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

void solve() {
    int no;
    cin >> no;
    string a;
    cin >> a;
    int n = 0, s = 0, e = 0, w = 0;
    for (int i = 0; i < no; i++) {
        if (a[i] == 'N') n++;
        else if (a[i] == 'S') s++;
        else if (a[i] == 'E') e++;
        else w++;
    }
    int up = n - s;
    int side = e - w;
    if (up % 2 != 0 || side % 2 != 0) {
        cout << "NO" << endl;
        return;
    }
    if ((n == 1 && s == 1 && e == 0 && w == 0) || (n == 0 && s == 0 && e == 1 && w == 1)) {
        cout << "NO" << endl;
        return;
    }
    string ans(no, '0');
    int h = 0, r = 0;
    int cnth = 0,cntr=0;
    int f1 = 0;
    

    for (int i = 0; i < no; i++) {   
        if (cnth == 0 && f1 > 0 ) 
        {
            if (a[i] == 'N') 
            {
                if (r <= h) 
                {
                    ans[i] = 'R';
                    r++;
                } 
                else 
                {
                    ans[i] = 'H';
                    h++;
                }
            } 
            else if (a[i] == 'S') 
            {
                if (r < h) 
                {
                    ans[i] = 'H';
                    h--;
                } 
                else 
                {
                    ans[i] = 'R';
                    r--;
                }
            }
        } 

        else if (a[i] == 'N') 
        {
            if (h <= r) 
            {
                ans[i] = 'H';
                h++;
                f1++;
                cnth++;
            } 
            else 
            {
                ans[i] = 'R';
                r++;
                cntr++;
            }
        } 
        else if (a[i] == 'S') 
        {
            if (h < r) 
            {
                ans[i] = 'R';
                r--;
                cntr--;
            } 
            else 
            {
                ans[i] = 'H';
                h--;
                f1++;
                cnth--;
            }

        }
        
    }

    h = 0, r = 0;
    cntr = 0,cnth=0;
    f1 = 0;


    for (int i = 0; i < no; i++)
    {
        if (cntr == 0 && f1 > 0 ) 
        {
            if (a[i] == 'E') 
            {
                if (h <= r) 
                {
                    ans[i] = 'H';
                    h++;

                } 
                else 
                {
                    ans[i] = 'R';
                    r++;
                }
            } 
            else if (a[i] == 'W') 
            {
                if (h < r) 
                {
                    ans[i] = 'R';
                    r--;
                } 
                else 
                {
                    ans[i] = 'H';
                    h--;

                }

            }
        } 

        else if (a[i] == 'E') 
        {
            if (h < r) 
            {
                ans[i] = 'H';
                h++;
                
            } 
            else 
            {
                ans[i] = 'R';
                r++;
                f1++;
                cntr++;
            }
        } 
        else if (a[i] == 'W') 
        {
            if (h <= r) 
            {
                ans[i] = 'R';
                r--;
                f1++;
                cntr--;
            } 
            else 
            {
                ans[i] = 'H';
                h--;
                
            }

        }
    }

    cout << ans << endl;

    return;
}

// Main function and template
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
