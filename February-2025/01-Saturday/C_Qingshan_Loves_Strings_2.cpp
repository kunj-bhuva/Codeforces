#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define ha cout << "YES" << endl;
#define na cout << "NO" << endl;
#define printv(v)         \
    for (auto i : v)      \
        cout << i << ' '; \
    cout << ln
#define ip(a, n)                \
    for (int i = 0; i < n; i++) \
    {                           \
        int xvyz;               \
        cin >> xvyz;            \
        a.push_back(xvyz);      \
    }
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n % 2)
    {
        cout << "-1" << endl;
        return;
    }
    int k = 300;

    int i = 0;
    int j = n-1;
    vi ind;
    // cout<<s[i]<<" "<<s[j]<<" ";
    int cnt = 0;
    // cout<<s<<endl;
    while (i < j)
    {

        if (s[i] == s[j] && s[i] == '0')
        {
            string sub = s.substr(0, j + 1);
            sub += '01';
            sub += s.substr(j + 1);
            s = sub;
            cout<<s<<" okkk"<<i<<" "<<j<<endl;
            ind.push_back(j + 1);
            i++;
            n += 2;
            j = n - i - 1;
            cnt++;
        }
        else if (s[i] == s[j] && s[i] == '1')
        {
            string temp = s.substr(0, i + 1);
            temp += '01';
            temp += s.substr(i + 1);
            s = temp;
            cout<<s<<" okkk"<<i<<" "<<j<<endl;
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define start(t) t.begin(),t.end()
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    
    return;
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
            ind.push_back(i + 1);
            n += 2;
            j--;
            i = n - j - 1;
            cnt++;
        }
        else if(s[i]!=s[j])
        {
            i++;
            j--;
            cout<<s<<" bc"<<endl;

        }
        k--;
    }
    // if(cnt>300){
    //     cout<<-1<<endl;
    // }
    // else cout<<cnt<<endl;

    // for(int i=0;i<ind.size();i++){
    //     cout<<ind[i]<<" ";
    // }
    // cout<<endl;
    cout << s << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}