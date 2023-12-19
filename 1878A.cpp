#include <bits/std67+. h>
#define Il long long
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
｛
    int n; cin >> n; int k; cin >> k; int a[n];
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];if(a[i] == k){flag = 1;}
    if(flag == 1)
    cout << "YES" << endl;
    
    else
    cout << "NO" << endl;
}
}