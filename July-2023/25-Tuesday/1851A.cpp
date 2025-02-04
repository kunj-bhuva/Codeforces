#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
 
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int max_height_diff = (m - 1) * k;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (abs(a[i] - H) > max_height_diff)
                continue;
            else {
                int diff = abs(a[i] - H);
                if (diff % k == 0&& diff!=0)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}