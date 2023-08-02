#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
bool allElementsAreSame(const std::vector<int> vec) {
   

    int firstElement = vec[0];
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] != firstElement) {
            return false; // If any element is different from the first, return false.
        }
    }

    return true; // All elements are the same.
}

int findMinDifference(const std::vector<int>& a) {
    

    int minDifference = std::abs(a[1] - a[0]); // Initialize with the difference between the first two elements.

    for (size_t i = 2; i < a.size(); ++i) {
        int currentDifference = std::abs(a[i] - a[i - 1]);
        if (currentDifference < minDifference) {
            minDifference = currentDifference; // Update minDifference if a smaller difference is found.
        }
    }

    return minDifference;
}
int main()
{
    int t;cin>>t;
    while(t--){
    int n;
    vi a;
    int dif=0;
    
    ip(a);
    vi b=a;
    sort(b.begin(),b.end());
    int f=a[0];
    if(allElementsAreSame(a))
    {
    cout << "1" <<endl;
    continue;
    }

    if(a!=b)
    {
        cout<<"0"<<endl;
    }
    else 
    {
        int minDifference = findMinDifference(a);
        cout<<(minDifference/2)+1<<endl;
    }
    }
    return 0;
}