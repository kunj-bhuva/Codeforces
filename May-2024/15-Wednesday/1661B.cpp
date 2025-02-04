
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front


#define dc double
#define ff first
#define sc second
#define endl '\n'
#define nl cout << endl

#define sorta(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define rev(s) reverse(s.begin(), s.end())

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t; 
    cin >> t;
    vi ans(32768,-1);
    queue<int> q; q.push(0); ans[0] = 0;
    while(!q.empty()){
        int pp = q.front(); q.pop();
        if((pp&1)==0)
        {
            if(ans[((pp+32768)/2)%32768]==-1)
            {
                q.push(((pp+32768)/2)%32768);
                ans[((pp+32768)/2)%32768] = ans[pp]+1;
            }
            if(ans[pp/2]==-1)
            {
                q.push(pp/2);
                ans[pp/2] = ans[pp]+1;
            }
        }
        if(ans[(pp+32768-1)%32768]==-1)
        {
            q.push((pp+32768-1)%32768);
            ans[(pp+32768-1)%32768] = ans[pp]+1;
        }
    }
    while(t--){
        ll n; cin >> n;
        cout << ans[n] << " ";
    }
    nl;
    return 0;
}