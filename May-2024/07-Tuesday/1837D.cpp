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
            string s;
            cin>>s;
            string also = s; 

            reverse(also.begin(), also.end());
            stack<int>st,st2;
            int open=0,close=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='(')open++;
                else close++;
                if(!st.empty()&&s[i]==')'&&s[st.top()]=='(')
                st.pop();
                else st.push(i);

            }


            for(int i=0;i<n;i++)
            {
                
                if(!st2.empty()&&also[i]==')'&&also[st2.top()]=='(')
                st2.pop();
                else st2.push(i);

            }


            if(open!=close)
            {
                cout<<"-1"<<endl;
                continue;
            }

            int flag=1,flag2=1;
            vector<int>ans(n,1);
            vector<int>ans2(n,1);
            if(st.size()!=n)
            {
                while(!st.empty())
                {
                    int k=st.top();
                    if(flag==1)flag++;
                    ans[k]++;
                    st.pop();
                }
            }

            if(st2.size()!=n)
            {
                while(!st2.empty())
                {
                    int k=st2.top();
                    if(flag2==1)flag2++;
                    ans2[k]++;
                    st2.pop();
                }
            }
            if(flag<=flag2)
            {
                cout<<flag<<endl;
                for(int i=0;i<n;i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<flag2<<endl;
                for(int i=n-1;i>=0;i--)
                {
                    cout<<ans2[i]<<" ";
                }
                cout<<endl;
            }
            // Your code logic goes here
        }
        return 0;
    }