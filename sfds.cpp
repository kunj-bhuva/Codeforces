class Solution {
public:
    vector<int> asteroidCollision(vector<pair<long long ,int>>asteroids) {
        vector <int> t;
        int pl = 1;
        stack<pair<long long,int>>st;
        s.push(asteroids[0]);
        pl = s.top();
        for(int i = 1 ; i<asteroids.size() ; i++){
            if(pl >=0 && asteroids[i].first< 0){
                bool lp = 1;
                while(pl >=0 && asteroids[i].first < 0 && !s.empty() && abs(pl) <= abs(asteroids[i].first)){
                    if(abs(pl) == abs(asteroids[i].first)){
                        s.pop();
                        if(!s.empty()){
                            pl = s.top().first;
                        }
                        lp = 0;
                        break;
                    }
                    s.pop();
                    if(s.empty() == 0){
                        pl = s.top().first;
                    }
                }
                if(lp && (s.empty() || s.top()*asteroids[i].first > 0)){
                    s.push(asteroids[i]);
                    pl = asteroids[i].first;
                }
            }else{
                s.push(asteroids[i]);
                pl = s.top().first;
            }
        }
        while(!s.empty()){
            t.push_back(s.top().second);
            s.pop();
        }
        if(t.size() != 0){
            reverse(t.begin(),t.end());
        }
        return t;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<long long int >a;
    vector<long long int >b;
    for(int i=0;i<n;i++)
    {
      int d;
      cin>>d;
      a.push_back(d);
    }
    for(int i=0;i<n;i++)
    {
      int d;
      cin>>d;
      b.push_back(d*a[i]);
    }
    
    vector<pair<long long ,int>>p;
    for(int i=0;i<n;i++)
    {
      p.push_back({b[i],i});
    }
    
    stack<pair<long long,int>>st;
    vector<int>aa=asteroidCollision(p);
    for(int i=aa.size()-1;i>=0;i--)
    {
        cout<<aa[i]<<" ";
    }

    return 0;
    
}