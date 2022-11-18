class Solution {
public:
    int check(int n,vector<int>&dp){
        if(n==0)
            return 0;
        if(dp[n]!=-1)return dp[n];
        int ans=1e9;
        for(int i=n;i>=1;i--){
            if(i*i<=n){
                int t=1+check(n-i*i,dp);
                ans=min(ans,t);
                dp[n]=ans;
            }
        }
        return dp[n]=ans;
    }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return check(n,dp);
    }
};
