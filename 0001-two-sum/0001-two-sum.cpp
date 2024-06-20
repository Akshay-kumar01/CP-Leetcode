class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> copy;
        for(int i=0;i<nums.size();i++)
            copy.push_back(nums[i]);
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            if((nums[l]+nums[r])>target)
                r--;
            else if((nums[l]+nums[r])<target)
                l++;
            else if((nums[l]+nums[r])==target)
                break;
        }
        vector<int> ans;
        for(int i=0;i<copy.size();i++)
            if(copy[i]==nums[l])
            {
                ans.push_back(i);
                break;
            }
        for(int i=copy.size()-1;i>=0;i--)
            if(copy[i]==nums[r])
            {
                ans.push_back(i);
                break;
            }
        return ans;
    }
};