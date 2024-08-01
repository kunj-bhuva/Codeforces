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

// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vi a;

        ip(a,n);
        vi ans(n,0);
        ans[0]=1;
        int i=2;
        int j=n;
        int incflag=0,decflag=0;
        for(int id=0;id<n-1;id++)
        {
            if(a[id+1]>a[id])incflag*=-1;
            else decflag*=-1;
                
                if((incflag==1&&decflag==1)||(incflag==-1&&decflag==-1))
                {
                    ans[id+1]=j;
                    j--;
                }
                else if((incflag==-1&&decflag==1)||(incflag==1&&decflag==-1))
                {
                    ans[id+1]=i;
                    i++;
                }
                
            
        }
        printv(ans);
        // Your code logic goes here
    }
    return 0;
}