    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef vector<long long int> vii;
    typedef vector<int> vi;

    // Macro definitions
    #define start(t) t.begin(),t.end()
    #define pb(x) push_back(x)
    #define ppb(x) pop_back(x)
    #define fi(i, a, b) for (ll i = a; i < b; i++)
    #define Na cout << "NO" << endl
    #define Ha cout << "YES" << endl
    #define na cout << "No" << endl
    #define ha cout << "Yes" << endl

    // Additional macros for printing and input
    #define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
    #define ip(a, n) for(int i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }
    // bool help(int ind,int look,int no,vector<int>&a)
    // {
    //     if(ind>=n)return true;
        
    // }
    void solve()
    {
        int n;
        cin>>n;
        vii a;
        a.pb(0);
        ip(a,n);

        vector<bool>dp(n+1,false);
        dp[0]=true;
        for(int i=1;i<=n;i++)
        {
            if(dp[i-1]==true&&(i+a[i])<=n)
            {
                dp[i+a[i]]=true;
            }
            if (i - a[i] - 1 >= 0 && dp[i - a[i] - 1]) dp[i] = true;
        }
        if(dp[n])Ha;
        else Na;
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