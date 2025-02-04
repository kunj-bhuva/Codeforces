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
        int n,k;
        cin>>n>>k;
        vi a;
        
        
        a.pb(1);
        a.pb(n);
        
        int no=k/2;
        int x=n-k;
        int pos=(x+1)/2;
        int neg=x/2;
        
        for(int i=1;i<k/2;i++)
        {
            int aaa,bbb;
            if(pos%no!=0)
            {
                aaa=(pos/no)+1;
                pos-=((pos/no)+1);
                
            }
            else{
                aaa=(pos/no);
                pos-=(pos/no);
                
            }
            if(neg%no!=0)
            {
                bbb=(neg/no)+1;
                neg-=((neg/no)+1);
                
            }
            else{
                bbb=(neg/no);
                neg-=(neg/no);
                
            }
            a.pb(a[a.size()-2]+aaa+1);
            a.pb(a[a.size()-2]-bbb-1);
            no--;


        }




        for(int i=k;i<n;i++)
        {
            if(i%2==0)
            {
                a.pb(a[i-k]+1);

            }
            else
            {
                a.pb(a[i-k]-1);
            }
        }
        printv(a);

        // Your code logic goes here
    }
    return 0;
}