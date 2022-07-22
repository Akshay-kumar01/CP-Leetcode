class Solution {
public:
    int solve(vector<vector<int>>& dp, int i, int n, int buy, vector<int>& prices)
    {
        if(i>=n)
            return 0;
        
        if(dp[i][buy]!=-1)
            return dp[i][buy];
        int p1=0,p2=0;
        if(buy)
        {
            dp[i][buy]=max(-prices[i]+solve(dp,i+1,n,0,prices),solve(dp,i+1,n,1,prices));
        }
        else
        {
            dp[i][buy]=max(prices[i]+solve(dp,i+2,n,1,prices),solve(dp,i+1,n,0,prices));
        }
        return dp[i][buy];
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp (n+1, vector<int>(2,-1));
        return solve(dp,0,n,1,prices);
    }
};