#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(char a, char b) {
    return a > b;
}
bool compar(char a, char b) {
    return a < b;
}

void solve() {
    string a1, a2;
    cin >> a1 >> a2;

    int n1 = a1.size();
    int n2 = a2.size();

    if (n1 < n2) {
        a1 = string(n2 - n1, '0') + a1;
    } else if (n2 < n1) {
        a2 = string(n1 - n2, '0') + a2;
    }

    sort(a1.begin(), a1.end(), compare);
    sort(a2.begin(), a2.end(), compar);

    int c = 0;
    for (int i = 0; i < a1.size(); i++) {
        char c1 = a1[i];
        char c2 = a2[i];

        int d = c1 - '0';
        int dd = c2 - '0';
        if (d >= dd)
            c += d - dd;
        else
            c += dd - d;
    }
    cout << c << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        solve();
    }

    return 0;
}
