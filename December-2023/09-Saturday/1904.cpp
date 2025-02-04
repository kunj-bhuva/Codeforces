#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long int;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;

        set<pair<int, int>> s1, s2;
        s1.insert(make_pair(xk - a, yk - b));
        s1.insert(make_pair(xk + a, yk - b));
        s1.insert(make_pair(xk - a, yk + b));
        s1.insert(make_pair(xk + a, yk + b));
        s1.insert(make_pair(xk - b, yk - a));
        s1.insert(make_pair(xk + b, yk - a));
        s1.insert(make_pair(xk - b, yk + a));
        s1.insert(make_pair(xk + b, yk + a));

        s2.insert(make_pair(xq - a, yq - b));
        s2.insert(make_pair(xq + a, yq - b));
        s2.insert(make_pair(xq - a, yq + b));
        s2.insert(make_pair(xq + a, yq + b));
        s2.insert(make_pair(xq - b, yq - a));
        s2.insert(make_pair(xq + b, yq - a));
        s2.insert(make_pair(xq - b, yq + a));
        s2.insert(make_pair(xq + b, yq + a));

        set<pair<int, int>> commonElements;
        for (const auto &elem : s1) {
            if (s2.count(elem) > 0) {
                commonElements.insert(elem);
            }
        }

        cout << commonElements.size() << '\n';
    }

    return 0;
}
