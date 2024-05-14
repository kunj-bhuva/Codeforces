#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin>>n;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            m[k]++;
        }
        vi a;
        for(auto i:m)
        {
            a.push_back(i.first);
        }
        sort(a.begin(),a.end());

        int maxi=-1;
        for(int i=0;i<a.size();i++)
        {
            int elementToInsert=a[i]+n;
            auto it = lower_bound(a.begin(), a.end(), elementToInsert);

            int indexToInsert = distance(a.begin(), it);
            maxi=max(maxi,indexToInsert-i);
        }
        cout<<maxi<<endl;
        // Your code logic goes here
    }
    return 0;
}