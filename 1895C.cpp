#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

#define printv(v) for (auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for (int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> a;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        a.push_back(s);
    }

    int ans = 0;
    vector<vector<int>> sum(n, vector<int>(5, 0));

    for (int i = 0; i < n; i++) {
        sum[i][0] = a[i][0] - '0';
        for (int j = 1; j < a[i].size(); j++) {
            sum[i][j] = a[i][j] - '0' + sum[i][j - 1];
        }
    }
    set<pair<int,int>>s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {ans++;
                s.insert({i,j});
                continue;
                }
            
            
            int num1, num2, no;
            int size_i = a[i].size();
            int size_j = a[j].size();
            int d = abs(size_i - size_j);

            if (size_i == size_j && sum[i][size_i - 1] == sum[j][size_j - 1]) {
                ans++;
                s.insert({i,j});
            }
            else if ((size_i + size_j) % 2 == 0) 
            {
                if(size_i>size_j)
                {
                    num1 = sum[j][size_j - 1];
                    num2 = sum[i][size_i - 1];
                    no = sum[i][size_i - 1 - d / 2];
                    num1=num1+ (num2-no);
                    if(num1==no)
                    {
                        ans++;
                        s.insert({i,j});
                    }
                    num1 = sum[j][size_j - 1];
                    num2 = sum[i][size_i - 1];
                    no=sum[i][d/2-1];
                    num1+=no;
                    if(num1==(num2-no))
                    {
                        ans++;
                        s.insert({j,i});
                    }

                }
                else {
                    num1 = sum[i][size_i - 1];
                    num2 = sum[j][size_j - 1];
                    no = sum[j][size_j - 1 - d / 2];
                    num1=num1+(num2-no);
                    if(num1==no)
                    {
                        ans++;
                        s.insert({j,i});
                    }
                    num2 = sum[j][size_j - 1];
                    num1 = sum[i][size_i - 1];
                    no=sum[j][d/2-1];
                    num1+=no;
                    if(num1==(num2-no))
                    {
                        ans++;
                        s.insert({i,j});
                    }
                }
                
                
                
            }
        }
    }

    
    cout<<s.size();
    return 0;
}
