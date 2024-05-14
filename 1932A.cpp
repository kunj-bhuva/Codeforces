#include <iostream>
using namespace std;

class Pair {
public:
    int first, second;
    Pair(int f, int s) : first(f), second(s) {}
};

int main() {
    int tc;
    cin >> tc;

    while (tc-- > 0) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long ans = 0;
        int i = 0;
        for (; i < n - 1; i++) {
            if (s[i] == '@') ans++;
            if (s[i] == '*' && s[i + 1] == '*') {
                break;
            }
        }
        if (i == n - 1 && s[n - 1] == '@') ans++;

        cout << ans << endl;
    }

    return 0;
}
