#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;

#define int ll

#define getunique(vzw)     {sort(vzw.begin(), vzw.end()); vzw.erase(unique(vzw.begin(), vzw.end()), vzw.end());}
#define all(Public)        Public.begin(),Public.end()

const int mod = 1e9+7;
const int inf = 1e17;
const int mod2 = 1e9+9;

const int N = 1000010;

void solve(){

    int r;
    cin>>r;

    int h = r;

    int ans=0;

    for(int i=0;i<=r;i++){
        while(i*i + h*h >= (r*r + 2*r + 1))
            h--;

        int curr= h;

        while(i*i + curr*curr >= r*r && curr>0)
        {
                 curr--;
                 ans++;
        }
    }
    cout<<ans*4<<"\n";

    
}


signed main() {

int t=1;
cin>>t;
while(t--)
solve();

}