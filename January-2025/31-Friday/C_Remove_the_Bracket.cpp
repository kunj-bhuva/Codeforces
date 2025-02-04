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

void solve()
{
    ll n,s;
    cin>>n>>s;
    vii a;
    ip(a,n);
    
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

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 200005;
// long long f[N][2],x[N],y[N];
// void get() {
// 	int i,n,s,j;
// 	cin>>n>>s;
// 	for(i=1; i<=n; i++) {
// 		cin>>j;
// 		if(i==1||i==n) x[i]=y[i]=j;
// 		else if(j<=s) x[i]=0,y[i]=j;
// 		else x[i]=s,y[i]=j-s;
// 	}
// 	f[1][0]=f[1][1]=0;
// 	for(i=2; i<=n; i++) {
// 		f[i][0]=min(f[i-1][0]+y[i-1]*x[i],f[i-1][1]+x[i-1]*x[i]);
// 		f[i][1]=min(f[i-1][0]+y[i-1]*y[i],f[i-1][1]+x[i-1]*y[i]);
// 	}
// 	cout<<f[n][0]<<endl;
// }
// int main() {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);
// 	int T; cin>>T;
// 	while(T--) get();
// 	return 0;
// }