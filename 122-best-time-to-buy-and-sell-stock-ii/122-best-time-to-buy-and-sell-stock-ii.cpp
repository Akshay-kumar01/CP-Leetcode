class Solution {
public:
    int solve(int i,int j, int n, vector<int>& prices)
    {
        if(j>=n)
            return 0;
        int ans=0;
        if(prices[j]>prices[i])
        {
            ans=prices[j]-prices[i];
            ans+=solve(j,j+1,n,prices);
            return ans;
        }
        ans=max(solve(i,j+1,n,prices),solve(j,j+1,n,prices));
        return ans;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]>prices[i-1])
                profit+=prices[i]-prices[i-1];
        }
        return profit;
    }
};