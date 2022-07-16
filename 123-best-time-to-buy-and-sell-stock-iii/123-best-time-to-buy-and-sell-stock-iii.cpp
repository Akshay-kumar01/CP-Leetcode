class Solution {
public:
    int solve(vector<vector<vector<int>>>& dp, int i, int n, int buy, int k, vector<int>& prices)
    {
        if(i>=n||k==2)
            return 0;
        
        if(dp[i][buy][k]!=-1)
            return dp[i][buy][k];
        
        int profit;
        
        if(buy)
            profit = max(-prices[i]+solve(dp,i+1,n,0,k,prices),0+solve(dp,i+1,n,1,k,prices));
        else
            profit = max(prices[i]+solve(dp,i+1,n,1,k+1,prices),0+solve(dp,i+1,n,0,k,prices));
        
        return dp[i][buy][k]=profit;        
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n, vector<vector<int>>(2, vector<int>(3,-1)));
        return solve(dp,0,n,1,0,prices);
    }
};