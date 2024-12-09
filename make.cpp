#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<long> vi;

#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

long help( vi &a, int i, int week, vector<vector<long>>&dp, long maxi,int n)
{
    if(week == 0)
    {
        if(i == n) return 0;  // Successfully partitioned
        return INT_MAX;       // Cannot partition anymore
    }

    if(i == n)
    {
        return INT_MAX;  // No more elements but still partitions left
    }

    if(dp[i][week] != INT_MAX)
    {
        return dp[i][week];
    }

    long current_max = maxi;
    long ans = INT_MAX;

    for(int j = i; j < n; j++) {
        current_max = max(current_max, a[j]);  // Update max in the current subarray

        long sub_result = help(a, j+1, week-1, dp, -1, n);  // Try partitioning after this point

        if(sub_result != INT_MAX) 
        {
            ans = min(ans, current_max + sub_result);
        }
    }

    return dp[i][week] = ans;
}

void solve()
{
   int n,week;
    cin >> n >> week;
    vi a;
    ip(a, n);

    long maxi = -1;
    vector<vector<long>> dp(n+1, vector<long>(week+1, INT_MAX));
    
    long result = help(a, 0, week, dp, maxi, n);
    cout << (result == INT_MAX ? -1 : result) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
