#include <bits/stdc++.h>
using namespace std;
typedef long  ll;
typedef vector<long  int> vii;
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
#define ip(a, n) for(long i = 0; i < n; i++) { long xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    long n,m;
    cin>>n>>m;
    vii a;
    ip(a,n);
    long  maxi=0;
    long  l=0,r=0,maxi=0;
    sort(a.begin(),a.end());
    int l = 0;
    int r = 0;
    long sum = 0;
    
    long prev = a[0];
    
    while(r<n)
    {
        sum+=a[r];
        while(sum>k&&l<=r||(a[r]-prev>1)&&l<=r){
           sum-=a[l];
           l++;
          if(l<n) prev = a[l];
        }
    
    
      if(prev-a[r]<=1)  maxi =max(sum,maxi);
        r++;
    }

    cout<<maxi<<endl;
    return;
}
// Main function and template
int main() {
    int sum; cin >> sum;
    while(sum--) {
        solve();
    }
    return 0;
}
    