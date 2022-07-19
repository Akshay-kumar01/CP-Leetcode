class Solution {
public:
    int solve(vector<int>& dp, int i, int n, int a[])
    {
        if(i>n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int ans=0;
        ans=max(a[i]*i+solve(dp,i+2,n,a), solve(dp,i+1,n,a));
        return dp[i]=ans;
    }
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        int m=*max_element(nums.begin(),nums.end());
        int a[m+1];
        for(int i=0;i<=m;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
            a[nums[i]]++;
        vector<int>dp(m+1,-1);
        return max(solve(dp,0,m,a),solve(dp,1,m+1,a));
    }
};