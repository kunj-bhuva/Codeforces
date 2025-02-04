#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vii;
typedef vector<int> vi;

// Macro definitions
#define sortv(t) sort(t.begin(), t.end())
#define pb push_back
#define fi(i, a, b) for (ll i = a; i < b; i++)

// Function to solve each test case
void solve() {
    ll n, d;
    cin >> n >> d;

    ll cnt = d;
    set<int> s;


    if(n==2)
    {
        for(int i=0;i<2;i++)
        {

            
            if (cnt % 3 == 0) s.insert(3);
            cnt+=d;
            // cout<<cnt<<"ad"<<endl;
        }
        cnt=d;
        for(int i=0;i<2;i++)
        {

            
            if (cnt % 9 == 0) s.insert(9);
            cnt+=d;
            // cout<<cnt<<"ad"<<endl;
        }
    }
    else if(n==3)
    {
        s.insert(3);
        cnt=d;
        for(int i=0;i<6;i++)
        {

            
            if (cnt % 9 == 0) s.insert(9);
            cnt+=d;
            // cout<<cnt<<"ad"<<endl;
        }
    }
    else
    {
        s.insert(3);
        s.insert(9);
    }
    

    

    s.insert(1);
    if (d == 5) s.insert(5);

    // ll mult = d;
    // for (int i = 0; i < min(n, 7LL); i++) {
    //     if (mult % 7 == 0) {
    //         s.insert(7);
    //         break;
    //     }
    //     mult = mult * 10 + d;
    // }



    if(n==2)
    {
        ll mult = d;
        for (int i = 0; i < 2; i++) {
            if (mult % 7 == 0) {
                s.insert(7);
                break;
            }
            mult = mult * 10 + d;
        }
    }
    else if(n==3)
    {
        ll mult = d;
        for (int i = 0; i < 6; i++) {
            if (mult % 7 == 0) {
                s.insert(7);
                break;
            }
            mult = mult * 10 + d;
        }
    }
    else{
        s.insert(7);
    }

    // Print the results
    for (auto it : s) cout << it << " ";
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
