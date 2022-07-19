class Solution {
public:
    int solve(vector<int>& dp, int i, int n, vector<int>& nums)
    {
        if(i>=n)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        int ans=0;
        ans=max(nums[i]+solve(dp, i+2,n,nums),0+solve(dp, i+1,n,nums));
        return dp[i]=ans;;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return solve(dp, 0, nums.size(), nums);
    }
};