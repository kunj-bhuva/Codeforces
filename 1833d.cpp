#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long int> vll;
typedef vector<int> vi;
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
#define ip(a,n) for(ll i = 0 ; i<n ; i++) cin >> a[i]
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

vector<long long> factors(long long n) {
    vector<long long> result;
    for (long long i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            result.push_back(i);
            if (n / i != i) {
                result.push_back(n / i);
            }
        }
    }
    return result;
}

bool isPowerOfTwo(long long n) {
    return n && !(n & (n - 1));
}

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool isSubstring(const string &mainString, const string &subString) {
    return mainString.find(subString) != string::npos;
}

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

string lexographicSmaller(string s1, string s2) {
    ll n = min(s1.length(), s2.length());
    for (ll i = 0; i < n; ++i) {
        if (s1[i] < s2[i]) {
            return s1;
        } else if (s1[i] > s2[i]) {
            return s2;
        }
    }
    return s1.length() < s2.length() ? s1 : s2;
}

ll max(ll x , ll y) {
    if (x >= y) return x;
    return y;
}

ll min(ll x,ll y) {
    if (x <= y) return x;
    return y;
}
vector<int> compare(vector<int>&a,vector<int>maxi)
{

    for(int i=0;i<a.size();i++)
    {
        if(a[i]>maxi[i])
        {
            return a;
        }
        else if(a[i]<maxi[i])
        {
            return maxi;
        }
    }
    return maxi;
}
int main() {
    ios_base::sync_with_stdio(false);
    ll t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int maxi=INT_MIN;
        int ind=-1;
        for(int i=1;i<n;i++)
        {
            if(a[i]>maxi)
            {
                maxi=a[i];
                ind=i;
            }
        }
        vector<int>ans;
        if(n==1){cout<<a[0]<<endl;
        continue;}
        for(int i=ind;i<n;i++)
        {
            ans.push_back(a[i]);
        }
        vector<int> maxii(n-ans.size(),0);
        for(int i=0;i<ind;i++)
        {
            // if(ind==n&&i==ind)break;
            vi temp,rev;
            if(ind<1)break;
            for(int k=ind-1;k>=i;k--)
            {
                temp.push_back(a[k]);
                // cout<<k<<endl;
            }
            for(int j=0;j<i;j++)
            {
                temp.push_back(a[j]);
                // cout<<j<<endl;
            }
            
            maxii=compare(temp,maxii);
            // for(int i=0;i<maxii.size();i++)
            // {
            //     cout<<maxii[i]<<" ";
            // }
            // cout<<endl;
        }
        if(ind==n-1)
        {
            vi temp,rev;
            if(ind<1)break;
            for(int k=ind-1;k>=ind;k--)
            {
                temp.push_back(a[k]);
                // cout<<k<<endl;
            }
            for(int j=0;j<ind;j++)
            {
                temp.push_back(a[j]);
                // cout<<j<<endl;
            }
            
            maxii=compare(temp,maxii);
            // for(int i=0;i<maxii.size();i++)
            // {
            //     cout<<maxii[i]<<" ";
            // }
            // cout<<endl;
        }
        for(int i=0;i<maxii.size();i++)
        {
            // cout<<maxii[i]<<endl;
            ans.push_back(maxii[i]);
        }
        fi(i,0,n)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        // Your code here
    }
    return 0;
}