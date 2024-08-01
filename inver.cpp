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
int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //Modification 1: cnt variable to count the pairs:
    int cnt = 0;

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); //Modification 2
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt; // Modification 3
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}

int numberOfInversions(vector<int>&a, int n) {

    // Count the number of pairs:
    return mergeSort(a, 0, n - 1);
}
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int l=0;
    int r=n-1;
    int aff1=0,aff0=0;
    int cnt=0;
    while(l<n)
    {
        if(s[l]=='1')
            cnt++;
        if(s[l]=='0')
        {
            aff1+=cnt;
            cnt=0;
        }
        l++;
    }
    cnt=0;
    while(r>=0)
    {
        if(s[r]=='0')
        cnt++;
        if(s[r]=='1')
        {
            aff0+=cnt;
            cnt=0;
        }
        r--;
    }

    
    if(aff1<aff0)
    {
        l=0;
        while(l<n&&k>0)
        {
            if(s[l]=='1')
            {
                s[l]='0';
                k--;
            }
            l++;
        }
        if(k>0)
        {
             r=n-1;
            while(r>=0)
            {
                if(s[r]=='0')
                {
                    s[r]='1';
                    k--;
                }
                r--;
            }
        }
    }
    else if(aff1>aff0)
    {
            r=n-1;
            while(r>=0)
            {
                if(s[r]=='0')
                {
                    s[r]='1';
                    k--;
                }
                r--;
            }
       
        if(k>0)
        {
             l=0;
            while(l<n&&k>0)
            {
                if(s[l]=='1')
                {
                    s[l]='0';
                    k--;
                }
                l++;
            }
        }

    }
    else{
        l=0;
        r=n-1;
        while(k>0&&l<r)
        {
            if(s[l]=='1'&&k>0)
            {
                k--;
                s[l]='0';
                
            }
             if(s[r]=='0'&&k>0)
             {
                k--;
                s[r]='1';
                
             }
             l++;
             r--;
        }
    }
    // cout<<s<<" "<<aff0<<" "<<aff1<<endl;
    // cout<<k<<endl;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)
    {
        a[i]=s[i]-'0';
    }
    long long ans=0;
    int zero=0;
    // cout<<s<<endl;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==0)
        {
            zero++;
        }
        else{
            ans+=zero;
        }

    }
    cout<<ans<<endl;
    // cout<<numberOfInversions(mer,n)<<endl;
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