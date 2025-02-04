#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Utility macros
// #define sort(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define printv(v)         \
    for (auto i : v)      \
        cout << i << ' '; \
    cout << endl;
struct apos{
	long long a;
	long long b;
	friend bool operator<(apos a,apos b){
		return a.a<b.a;
	}
}ap[300000];
// Function to solve each test case
void solve()
{
    set<long long>st;

    long long x,ans;
    int n;
    cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(i==0)continue;
			ap[i].a=x+i;
			ap[i].b=x+i*2;
		}
		sort(ap,ap+n);
		ans=n;
		st.insert(n);
		for(int i=0;i<n;i++)
		{
			if(st.find(ap[i].a)!=st.end())
			{
				ans=max(ans,ap[i].b);
				st.insert(ap[i].b);
			}
		}
		st.clear();
		cout<<ans<<'\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
