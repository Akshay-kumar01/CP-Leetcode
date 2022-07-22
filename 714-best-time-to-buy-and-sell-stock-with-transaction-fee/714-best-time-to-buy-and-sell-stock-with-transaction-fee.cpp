class Solution {
public:
    int solve(vector<vector<int>>& dp,int i, int buy, int n, vector<int>& prices,int fee)
    {
        if(i>=n)
            return 0;
        if(dp[i][buy]!=-1)
            return dp[i][buy];
        
        int profit=0;
        if(buy)
        {
            profit=max(-prices[i]+solve(dp,i+1,0,n,prices,fee),
                      0+solve(dp,i+1,1,n,prices,fee));
        }
        else
        {
            profit = max(-fee+prices[i]+solve(dp,i+1,1,n,prices,fee),0+solve(dp,i+1,0,n,prices,fee));
        }
        return dp[i][buy]=profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        int profit=0;
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(dp,0,1,n,prices,fee);
    }
};