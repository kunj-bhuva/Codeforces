
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


int solve(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>mod(n,0);
        for(int i=0;i<n;i++)
        {
            mod[i]=nums[i]&k;
        }
        vector<int>left(n,0),right(n,0);
        if(mod[0]==1)left[0]=1;
        for(int i=1;i<n;i++)
        {
            if(mod[i]==1)
                left[i]=mod[i]+left[i-1];
        }
        
        if(mod[n-1]==1)right[n-1]=1;

        for(int i=n-2;i>=0;i--)
        {
             if(mod[i]==1)
                right[i]=mod[i]+right[i+1];
                
        }

        long long ans=0;

        for(int i=0;i<n;i++)
        {
            ans+=((right[i])*(left[i]));
        }
        return ans;
    }
// Main function and template
int main() {
    vi a;
    int n,k;
    cin>>n>>k;
    ip(a,n)
    cout<<solve(a,k)<<endl;
    
    return 0;
}