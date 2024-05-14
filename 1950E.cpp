#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long int> vll;
typedef pair<long long int,long long int> pr;
typedef pair<pr,pr> pipii;

#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define ff first
#define ss second
#define cv(a) for(ll i = 0 ; i<a.size() ; i++) cin >> a[i];
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define fib(i,b,a) for(ll i = b-1 ; i >= a ; i--)
#define inv(a,n) for(ll i = 0 ; i<n ; i++) cin >> a[i]
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

//kunjjj


bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}





string make_m_times_string(int m, const std::string& st) {
    // string s1 = s;
    string ans="";
    for (int i = 0; i < m; i++) {
        ans+=st;
    }
    return ans;
}
bool areSimilar(const string& s1, const string& s2) {
  
    if (std::abs((int)s1.size() - (int)s2.size()) > 1)
        return false;
    

    if (s1.size() == s2.size()) {
        int diffCount = 0;
        for (size_t i = 0; i < s1.size(); ++i) {
            if (s1[i] != s2[i]) {
                diffCount++;
                if (diffCount > 1)
                    return false;
            }
        }
        return true;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    ll t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=0;
        int zz=0;
            for(int i=1;i<=n/2;i++)
            {
                if(n%i!=0)continue;
                string st = s.substr(0, i);

                string en = s.substr(s.size() - i);

                int d=n/i;

                string r1 = make_m_times_string(d, st);
                string r2 = make_m_times_string(d, en);
                if(areSimilar(r1, s)||areSimilar(r2,s))
                {
                    cout<<i<<endl;
                    f=1;
                    break;
                }

            }
        
        
        
        if(f==0)cout<<n<<endl;

    }
    return 0;
}