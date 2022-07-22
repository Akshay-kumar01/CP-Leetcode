class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0,farthest=0,curr=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            farthest=max(farthest,i+nums[i]);
            if(i==curr)
            {
                curr=farthest;
                ans++;
            }
        }
        return ans;
    }
};