#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

#define ll long long
 
// Loops
#define fo(i,n) for(ll i=0;i<n;i++)
#define rfo(i,n) for(ll i=n-1;i>=0;i--)
#define fop(i,s,e) for(ll i=s;i<=e;i++)
#define rfop(i,s,e) for(ll i=s;i>=e;i--)
#define ft(x,a) for(auto x:a)
#define fq(q) while(q--)
 
// Inputs
#define in(n) ll n;cin>>n;
#define inn(n,k) ll n,k;cin>>n>>k;
#define vin(a,n) vl a(n);for(ll i=0; i<n; i++)cin>>a[i];
#define strin(s) string s;cin>>s;
 
// Outputs
#define cy printf("YES\n")
#define cn printf("NO\n")
#define on(n) cout<<n<<endl;
#define onn(n,k) cout<<n<<" "<<k<<endl;
#define vo(a) for(auto x:a){cout<<x<<" ";}cout<<endl;
 
// Functions
#define ub upper_bound
#define lb lower_bound
#define sbit(a,k) ((a & (1<<k))!=0) // check for Kth bit
 
// STL
#define pb emplace_back
#define mp make_pair
#define ppb pop_back
#define spb insert
#define F first
#define S second
 
// Sorting
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define maxa(v) *max_element(v.begin(),v.end())
#define mina(v) *min_element(v.begin(),v.end())
 
 
#define PI 3.1415926535897932384626
const ll mod = 1e9 + 7;
const ll pim = INT_MAX;
const ll nim = INT_MIN;
 
typedef pair < ll, ll > pl;
typedef vector < ll > vl;
typedef stack < ll > stl;
typedef queue < ll > ql;
typedef priority_queue < ll > pql;
typedef set < ll > sl;
typedef unordered_set < ll > usl;
typedef map < ll, ll > mll;
typedef unordered_map < ll, ll > umll;
typedef map < ll, vl > mlvl;
typedef vector < pl > vpl;
  
void solve() {
    int n;
    cin >> n; 
 
    vector<vector<ll>> a(n, vector<ll>(2));
 
    for(int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }
 
    vector<vector<ll>> maxLess(n);
 
    fo(i,n){
        maxLess[i] = {max(a[i][0],a[i][1]), min(a[i][0],a[i][1]), i};
    }
 
    sortall(maxLess);
 
    vl vec;
 
    for(auto x : maxLess){
        ll z = x[2];
        vec.push_back(a[z][0]);
        vec.push_back(a[z][1]);
    }
 
    for(auto x : vec){
        cout << x << ' ';
    }
 
    cout << '\n';
}

// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}