#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a,n)           for(int i=0;i< n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
void dolve(int target,vi arr)
{
    int left = 0;
    int right = arr.size() - 1;
    int count = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            count = mid + 1; 
            left = mid + 1; 
        } else {
            right = mid - 1;
        }
    }
    cout<<count<<" ";
}

int main()
{
    int n,m;
    cin>>n>>m;
    vi a;
    vi b;
    ip(a,n);
    ip(b,m);
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++)
    {
        dolve(b[i],a);
    }

    return 0;
}