class Solution {
public:

    int helper(int i,int j,string text1, string text2,vector<vector<int>>&dp)
    {
        if(j<=0||i<=0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];

        if (text1[i - 1] == text2[j - 1])
        {
            dp[i][j] = 1 + helper( i - 1, j - 1,text1, text2,dp);
        } 
        else 
        {
            dp[i][j] = max( helper( i, j - 1,text1, text2,dp), helper( i - 1, j,text1, text2,dp));
        }
        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        int i=text1.size();
        int j=text2.size();
        vector<vector<int>>dp(i+1,vector<int>(j+1,-1));

        return helper(i,j,text1,text2,dp);
    }
};