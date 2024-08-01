#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

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
   long long x,y,k;
   cin>>x>>y>>k;
   while(k>0)
   {
        long long kkk=x%y;
        long long kk=y-kkk;
        // if(x==y)
        // {
        //     k%=(y-1);
        // }
        if(x==1)
        {
            k%=(y-1);
        }
        if(kk==0)
        {
            int left=min(y,k);
            x+=left;
            k-=left;
            continue;

        }
        if(k>=kk)
        {
            k-=kk;
            x+=kk;
            while(x%y==0){x/=y;}
        }
        else{
            x+=k;
            k=0;
        }

   }
   cout<<x<<endl;
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