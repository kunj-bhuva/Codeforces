#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << endl
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << endl;}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        if(m % 2 == 1) {
            m--;
        }
        
        int result = n * m / 2;
        cout << result << endl;
    }
    return 0;
}
