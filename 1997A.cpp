#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

class FastReader {
public:
    FastReader() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    }

    string next() {
        string x;
        cin >> x;
        return x;
    }

    int nextInt() {
        int x;
        cin >> x;
        return x;
    }

    vector<int> nextInts(int N) {
        vector<int> res(N);
        for (int i = 0; i < N; ++i) {
            cin >> res[i];
        }
        return res;
    }

    vector<long> nextLongs(int N) {
        vector<long> res(N);
        for (int i = 0; i < N; ++i) {
            cin >> res[i];
        }
        return res;
    }

    long nextLong() {
        long x;
        cin >> x;
        return x;
    }

    double nextDouble() {
        double x;
        cin >> x;
        return x;
    }

    string nextLine() {
        string x;
        getline(cin, x);
        return x;
    }
};

class FastWriter {
public:
    FastWriter() {
        ios::sync_with_stdio(false);
        cout.tie(nullptr);
    }

    void print(const string &s) {
        cout << s;
    }

    void println(const string &s) {
        cout << s << '\n';
    }

    void close() {
        cout.flush();
    }
};


FastReader sc;
FastWriter out;

void solve() {
    int m[26] = {0};
    string s = sc.next();
    int n = s.length();

    for (int i = 0; i < n; ++i) {
        m[s[i] - 'a']++;
    }

    if (n == 1) {
        if (s[0] != 'a') {
            cout << s << "a\n";
        } else {
            cout << s << "z\n";
        }
        return;
    }

    for (int i = 1; i < n; ++i) {
        if (s[i - 1] == s[i]) {
            if (s[i] != 'z') {
                cout << s.substr(0, i) << 'z' << s.substr(i) << '\n';
                return;
            } else {
                cout << s.substr(0, i) << 'a' << s.substr(i) << '\n';
                return;
            }
        }
    }

    if (s[n - 1] != 'a') {
        cout << s << "a\n";
    } else {
        cout << s << "z\n";
    }
}

int main() {
    int tc = sc.nextInt();

    while (tc-- > 0) {
        solve();
    }

    return 0;
}
