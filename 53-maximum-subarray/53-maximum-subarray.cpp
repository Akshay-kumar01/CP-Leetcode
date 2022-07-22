class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN,sum=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                c++;
        }
        if(c==nums.size())
        {
            for(int i=0;i<nums.size();i++)
            {
                m=max(m,nums[i]);
            }
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                sum=sum+nums[i];
                if(sum<0)
                    sum=0;
                m=max(m,sum);
            }
        }
        return m;
    }
};