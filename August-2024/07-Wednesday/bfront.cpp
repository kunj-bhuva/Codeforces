#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort_vec(t) sort(t.begin(),t.end())
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

int checkback(string &s) {
    string ans = "";
    string back = "back";
    int j = 3;
    int f = 1;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (j == -1) {
            f = 0;
            ans = s.substr(0, i + 1) + ans;
            break;
        } else if (back[j] == s[i]) {
            j--;
            continue;
        } else if (s[i] == '?' && i >= j) {
            int num_questions = i - j;
            string prefix(num_questions, '?');
            ans = prefix + ans;
            f = 0;
            break;
        } else {
            ans = s[i] + ans;
        }
    }
    if (f == 0) {
        ans = "?" + ans;
        s = ans;
        return 1;
    }
    return 0;
}

string checkfront(string &s) {
    string ans = "";
    string front = "front";
    int j = 0;
    int f = 1;
    int n = s.size();
    for (int i = 0; i < s.size(); i++) 
    {
        if (j == 5) {
            f = 0;
            ans += s.substr(i);
            break;
        } 
        else if (front[j] == s[i]) 
        {
            j++;
            continue;
        } 
        else if (s[i] == '!' && (s.size() - i) >= (5 - j)) 
        {
            int num_questions = (5 - j);
            string prefix(num_questions, '!');
            ans += prefix + s.substr(i);
            f = 0;
            break;
        } 
        else 
        {
            ans += s[i];
        }
    }
    
    if (f == 0) {
        s = ans;
        return s + "!";
    }
    return s;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    while (true) {
        int d = checkback(s);
        if (d == 0) break;
    }
    cout<<s<<endl;

    while (true) {
        string a = checkfront(s);
        if (a.size() == s.size()) break;
        s = a;
        // cout<<a<<endl;
    }
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
