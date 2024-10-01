#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sortv(t) sort(t.begin(),t.end())  // Renamed to avoid conflict
#define pb(v, x) v.push_back(x)
#define ppb(v) v.pop_back()
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
   ll k;
   cin >> k;
   if(k == 1)
   {
         cout << 2 << endl;
         return;
   }
   if(k > 0)
   {
       ll st = 1, en = 2e18;
       ll sq = 0;
       while(st <= en)
       {
           ll mid = (st + en) / 2;
           if(mid <= k / mid)  // Prevent overflow
           {
               sq = mid;
               st = mid + 1;
           }
           else
           {
               en = mid - 1;
           }
       }
       if((k+sq)>=(sq+1)*(sq+1))
       {
            k++;
       }
       cout << k + sq << endl;
   }
   return;
}

// Main function and template
int main() {
    int t; 
    cin >> t;
    
    while(t--) {
       solve();    
    }
    return 0;
}
