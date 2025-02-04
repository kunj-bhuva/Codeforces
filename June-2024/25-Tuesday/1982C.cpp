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

void solve()
{
   long long n,l,r;
   cin>>n>>l>>r;
   vi a;
   ip(a,n);
   long long sum=0;
   long long left=0,right=0;
   long long c=0;
   while(right<n)
   {
        sum+=a[right];
        if(sum<l)
        {
            right++;
            continue;
        }
        else if(sum>r)
        {
            while(sum>r&&left<right)
            {
                sum-=a[left];
                left++;
            }
        }
        if(sum>=l&&sum<=r)
        {
            sum=0;
            c++;
            left=right+1;
        }
        right++;
        
   }
   cout<<c<<endl;
   return;
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}