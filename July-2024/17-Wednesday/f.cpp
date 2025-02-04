long help(i,j,k)
{
    if(i<0||j<0||k<0)return 0;
    if(i==0&&j==0)
    {
        if(k==0)return 0;
        return mat[i][j];
    }
    if(dp[i][j][k]!=-1)return dp;
    long sidepick=0,sidenot=0,up=0;
    sidepick=mat[i][j]+help(i-1,j,k-1);
    sidenot=help(i-1,j,k);
    up=help(i-1,j,k-1);
    if(k<0)
        up+=mat[i][j];
    return dp=max(sidenot,sidepick,up);
}