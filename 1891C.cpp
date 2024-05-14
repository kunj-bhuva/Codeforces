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

// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vii a;
        ip(a,n);
        sort(a);
        ll count=0;
        int i=0,j=n-1;
        ll sum=0;
        while(i<=j)
        {
            if(i==j)
            {
                if((a[i])==1){count++; break;}
                else {
                    count+=(a[i]-sum)/2 +2;
                    i++;
                    break; 
                }
            }
            else if(sum<a[j])
            {
                if((a[i]+sum)<a[j])
                {
                    // cout<<"a";
                    count+=a[i];
                    sum+=a[i];
                    i++;
                    continue;
                }
                else if(sum==0 && a[i]==a[j])
                {
                    
                        if(a[i]==1){
                            count++;
                            i++;
                            j--;
                        }
                        else {
                            count+=(a[i]+1)%2 + 1;
                            i++;
                            j--;
                        }
                    
                    
                }
                else if((a[i]+sum)==a[j])
                {
                    // cout<<"b";
                    count+=a[i];
                    count++;
                    sum=0;
                    i++;
                    j--;
                    continue;
                }
                else
                {
                    // cout<<"c";
                    count+=(a[j]-sum);
                    count++;
                    sum=0;
                    a[i]-=(a[j]-sum);
                    j--;
                    continue;
                }
            }
            else if(sum==a[j])
            {
                // cout<<"d";
                count++;
                sum=0;
                j--;
                continue;

            }
            else
            {
                // cout<<"e";
                count++;
                sum=0;
                j--;
                continue;
            }
            // cout<<i<<" "<<j<<endl;
        }
        cout<<count<<endl;
    }
    return 0;
}