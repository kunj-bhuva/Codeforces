#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v) for(auto i: v) cout << i << ' '; cout << '\n'
#define printvv(v) for(auto i: v) {for(auto j: i) cout << j << ' '; cout << '\n';}
#define ip(a) for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }

int calc(string s, int i) {
    set<char> set1;
    set<char> set2;
    string s1 = s.substr(0, i);
    string s2 = s.substr(i);
    
    for (char c : s1) {
        set1.insert(c);
    }
    for (char c : s2) {
        set2.insert(c);
    }
    return set1.size() + set2.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxx = 0;
        if(n==2)
        {
            cout<<"2"<<endl;
            continue;
        }
        for (int i = 1; i < n - 1; i++) {
            int m = calc(s, i);
            maxx = max(maxx, m);
        }
        cout << maxx << '\n';
    }
    return 0;
}
