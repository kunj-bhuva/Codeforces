#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long int;
using vi = vector<int>;

#define printv(v)     for(auto i: v) cout << i << ' '; cout << endl
#define printvv(v)    for(auto i: v) {for(auto j: i) cout << j << ' '; cout << endl;}
#define ip(a)         for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        vi a;
        ip(a);
        sort(a.begin(), a.end());
        map<int, int> m;
        for (auto i : a) {
            m[i]++;
        }
        long long ans = 0;
        int smalls = 0;

        for (auto i : m) 
          {
               if (i.second >= 3) 
               {
                     ans += (ll)(i.second) * (i.second - 1) * (i.second - 2) / 6;
               }
           if (i.second >= 2) 
           {
               ans += (ll)(i.second) * (i.second - 1) * smalls / 2;
           }
           smalls += i.second;
     }

        cout << ans << endl;
    }
    return 0;
}
