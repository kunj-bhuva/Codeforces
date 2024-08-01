#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)

// int standd[100001][20]; 
  
// void build(int arr[], int N) 
// { 
//     for (int i = 0; i < N; i++) 
//         standd[i][0] = arr[i]; 
  
//     for (int j = 1; j <= 20; j++) 
//         for (int i = 0; i + (1 << j) <= N; i++) 
//             standd[i][j] = standd[i][j - 1] | standd[i + (1 << (j - 1))][j - 1]; 
// } 
  
// int qq(int left, int right) 
// {
//     int sum=0; 
//     for (int j = 20; j >= 0; j--) 
//     { 
//         if ((1 << j) <= right - left + 1) 
//         { 
//             sum |= standd[left][j]; 
//             left += 1 << j; 
//         } 
//     } 
//     return sum; 
// } 
bool check(int k,vi arr)
{
    int n=arr.size();
    unordered_map<int,int>mp;
    for(int i=0;i<k;i++)
    {
        
    }
}
int main() 
{ 
    int t; 
    cin>>t; 
    while(t--) 
    { 
        int n; 
        cin>>n; 
        vi arr(n,0); 
        for(int i=0;i<n;i++) 
        { 
            cin>>arr[i]; 
        } 
        int left=1,right=n; 
        int ans=n; 
        while(left<=right) 
        { 
            int mid=left+(right-left)/2; 
            if(check(mid,arr))
            {
                right=mid-1;
                ans=mid;
            } 
            else{
                left=mid+1;
            }
        }
    } 
}

