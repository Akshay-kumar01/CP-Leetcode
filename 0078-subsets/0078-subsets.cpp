class Solution {
public:
    void help(vector<int>& nums, vector<vector<int>> &ans, vector<int> &ds, int ind)
    {
        if(ind==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        help(nums, ans, ds, ind+1);
        ds.pop_back();
        help(nums,ans, ds, ind+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        help(nums, ans, ds, 0);
        return ans;
    }
};