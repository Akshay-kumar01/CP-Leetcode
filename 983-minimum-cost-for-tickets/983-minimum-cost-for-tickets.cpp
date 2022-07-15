class Solution {
public:
    int solve(int n,vector<int>& dp, vector<int>& days, vector<int>& costs, int index)
    {
        if(index>=n)
            return 0;
        
        if(dp[index]!=-1)
            return dp[index];
        
        int option1 = costs[0] + solve(n,dp,days,costs,index+1);
        
        int i;
        int option2,option3;
        for(i=index;i<n&&days[i]<days[index]+7;i++);
        
        option2=costs[1] + solve(n,dp,days,costs,i);
        
        for(i=index;i<n&&days[i]<days[index]+30;i++);
        
        option3=costs[2] + solve(n,dp,days,costs,i);
        
        dp[index]=min(option1,min(option2,option3));
        return dp[index];
        
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector<int>dp(n+1,-1);
        return solve(n,dp,days,costs,0);
    }
};