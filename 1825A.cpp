#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
int checkString(const std::string& str) {
    if (str.empty())
        return -1;

    char firstChar = str[0];
    for (int i = 1; i < str.length(); i++) {
        if (str[i] != firstChar)
            return str.length() - 1;
    }

    return -1;
}
int main()
{
    int t;cin>>t;
    while(t--){
        string s;
        int r=checkString(s);
        cout<<r<<endl;
    }
    return 0;
}