class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;
        int copy=target;
        for(i;i<nums.size();i++)
        {
            target-=nums[i];
            auto it=find(nums.begin()+i+1,nums.end(),target);
            if(it!=nums.end()&&(it-nums.begin())!=i)
            {
                j=it-nums.begin();
                break;
            }
            else
            target+=nums[i];
        }
        vector<int> ans;
        if(i==nums.size())
        i--;
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
};