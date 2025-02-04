// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef vector<long long int> vii;
// typedef vector<int> vi;

// #define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define endl '\n'
// // Additional macros for printing and input
// // #define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
// #define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

// void solve()
// {
//     int n;
//     cin>>n;
//      vii a;
//      ip(a,n);
//      string s;
//      cin>>s;
//     ll q;
//     cin>>q;
//     ll ones=0,zeros=0;
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='0')zeros^=a[i];
//         else ones^=a[i];
//     }

//     while(q--)
//     {
//         int tf;
//         cin>>tf;
//         if(tf==1)
//         {
//             ll r,l;
//             cin>>l>>r;
//             for(int i=l-1;i<r;i++)
//             {
//                 s[i]=!s[i];
//                 ones^=a[i];
//                 zeros^=a[i];
//             }
//         }
//         else
//         {
//             ll g;
//             cin>>g;
            
            
//         }
        
//     }
//     cout<<endl;
//     return;
// }
// // Main function and template
// int main() {
//     FAST_IO; // Enable fast I/O
//     int t; cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vii;
typedef vector<int> vi;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ip(a, n) for (int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    int n;
    cin >> n;

    vii a;
    ip(a, n);

    string s;
    cin >> s;

    ll q;
    cin >> q;

    // Prefix XOR array
    vii prefixXOR(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefixXOR[i] = prefixXOR[i - 1] ^ a[i - 1];
    }

    // Calculate initial ones and zeros XOR
    ll ones = 0, zeros = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') zeros ^= a[i];
        else ones ^= a[i];
    }

    // Lazy toggle flag
    bool flipped = false;

    while (q--) {
        int tf;
        cin >> tf;

        if (tf == 1) {
            // Toggle range [l, r]
            ll l, r;
            cin >> l >> r;

            // Calculate XOR of the range
            ll rangeXOR = prefixXOR[r] ^ prefixXOR[l - 1];

            // Flip XOR values based on the range
            zeros ^= rangeXOR;
            ones ^= rangeXOR;
        }
        else {
            ll g;
            cin >> g;
            if(g==1)
            {
                cout<<ones<<" ";
            }
            else
            {
                cout<<zeros<<" ";
            }
            
        }
    }
    cout << endl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
