#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fi(l, r) for(ll i=l;i<r;i++)
#define fj(l, r) for(ll j=l;j<r;j++)
#define fir(r, l) for(ll i=r;i>=l;i--)
#define fjr(r, l) for(ll j=r;j>=l;j--)
 

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}




void solve(){
  ll n;
  cin >> n;
  vector<ll> v(n+1, 0);
  vector<ll> fr(n+1, 0);
  map<ll, ll> m;
  fi(1, n+1){
    ll a;
    cin >> a;
    m[i] = a;
    fr[a]++;
  }

  fi(1, n+1){
    if(fr[i] > 1){
      v[i] = -1;
    }
  }

  ll i = 1;
  ll half = 0, full = 0;
  while(i < n+1){
    if(v[i] == 0){
      ll cnt = 1;
      ll ele = i;
      v[ele] = ele;
      ll curr = m[ele];
      bool ch = false;
      while(v[curr] != ele){
        if(v[curr] != 0 && v[curr] != -1){
          ch = true;
          break;
        }
        v[curr] = ele;
        curr = m[curr];
        cnt++;
      }
      if(ch){
        i++;
        continue;
      }
      if(curr == ele && cnt > 2){
        full++;
      }else{
        half++;
      }
    }
    i++;
  }

  cout << full + (half > 0) << " " << (full+half) << "\n"; 
}

int main() {

  

  ll t = 1;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
} 