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
int countSubstringOccurrences(const std::string& str, const std::string& substr) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find(substr, pos)) != std::string::npos) {
        count++;
        pos += substr.length();
    }

    return count;
}

// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int o1 = countSubstringOccurrences(s, "map");
        int o2 = countSubstringOccurrences(s, "pie");
        int o3 = countSubstringOccurrences(s, "mapie");
        cout<<o1+o2-o3<<endl;
        // Your code logic goes here
    }
    return 0;
}