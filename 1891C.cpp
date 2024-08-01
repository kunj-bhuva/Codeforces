#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define debug(i) cout<<i<<endl
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define input(v) for(auto &x:v) cin>>x;
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define set_bits(x) __builtin_popcountll(x)
#define lcm(a, b) ((a) * (b) / __gcd(a, b))
const int N = 1e6+10;
using namespace std;

void solve(){

     int n;
     cin>>n;
     int arr[n];


     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
      
    sort(arr,arr+n);


    int i=0,j=n-1;
    int sum = 0;

    int ans = 0;

    while(i!=j){

       if(sum+arr[i]>=arr[j]){
            int n1 = arr[j]-sum;

            sum+=n1;
            arr[i]-=n1;
            ans+=n1;
            j--;
            ans++;
            sum=0;
       }
       else{
          sum+=arr[i];
          ans+=arr[i];
          i++;
       }
      
    }



        int num = arr[i]-sum;


        int n2 = num&1?num/2+1:num/2;
         ans+=(n2);
         arr[i]-=n2;

         if(arr[i]!=0){
            ans++;
         }


         cout<<ans<<endl;
}
 

int32_t main(){
 
   IOS;
   int T;
   cin>>T;
   // T=1;
 
   while(T-->0){
      solve();
   }
 
 
}