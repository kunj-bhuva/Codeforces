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

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vii a;
        ip(a, n);
        map<string, int> m;
        for (int i = 0; i < n; i++) {
            
            string binaryString = bitset<31>(a[i]).to_string();
            // cout<<binaryString<<endl;
            m[binaryString]++;
        }
        
        int c = 0;
        for (auto i : m) 
        {
            string temp = "";
            for (char c : i.first) {
                if (c == '1') temp += '0';
                else temp += '1';
            }
            // cout<<temp<<endl;
            auto it = m.find(temp);
            if(it!=m.end())
            {int m1 = it->second;
            int m2 = i.second;
            int mini = min(m2, m1);
            c += mini;
            it->second -= mini;
            i.second -= mini;}
        }
        cout << n - c << endl;
        // Your code logic goes here
    }
    return 0;
}
