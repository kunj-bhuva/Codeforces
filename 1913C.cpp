#include <bits/stdc++.h>
#include<math.h>
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
void check(vector<int>a,ll no)
{
    int f=0;
    for(int i=29;i>=0;i--)
    {
        
        if( a[i]>0 &&  no/pow(2,i)>0 )
        {
            int yy=no/pow(2,i);
            int xx=min(a[i],yy);
            
            no-=xx*pow(2,i);
        }
        if(no==0)
        {
            
            f=1;
            break;
        }
    }
    if(f==0)
    {
        Na;return;
    }
    else
    {
        Ha; return;
    }
    return;
}

// Main function and template
int main() {
        int t; cin >> t;
        int f=0;
        vector<int>a(33,0);
        while(t--) 
        {
            
        
        
            ll s,no;
            cin>>s>>no;
            if(s==1)
            {
                a[no]++;
                continue;
            }
            else
            {
                check(a,no);
            }

            
        }
        // Your code logic goes here
    
    return 0;
}