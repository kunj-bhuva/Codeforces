#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

// int solution(int n, int arr[])
// {
//     // 
    void solve()
    {
        int n;
        cin>>n;
        vi arr;
        ip(arr,n);
    

   vector<int>odd;
   vector<int>even;
    long long oddsum=0,evensum=0;

   for(int i=0;i<n;i++)
   {
        if(i%2==1)//even
        {
            even.push_back(arr[i]);
            evensum+=arr[i];
        }   
        else
        {
            odd.push_back(arr[i]);
            oddsum+=arr[i];
        }
   }
   
   long long cnt=0;
   long long tempodd=0,tempeven=0;

   for(int i=0;i<n;i++)
   {
        if(i%2==1)
        {
            long long cnt1=tempodd  + evensum - arr[i] - tempeven;
            // tempodd+=evensum-arr[i]-tempeven;
            long long cnt2= tempeven+oddsum-tempodd;
            if(cnt1==cnt2)cnt++;

            tempeven+=arr[i];


        }
        else
        {
            long long cnt1=tempodd+evensum-tempeven;
            // tempodd+=evensum-arr[i]-tempeven;
            long long cnt2= tempeven+oddsum-tempodd-arr[i];
            if(cnt1==cnt2)cnt++;

            tempodd+=arr[i];
        }

   }
   cout<<cnt<<endl;
//    return cnt;
   return;
}
// Main function and template
int main() {
    
        solve();
    
    return 0;
}   