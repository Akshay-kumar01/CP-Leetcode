class Solution {
public:
    void findf(vector<vector<int>> &ans, vector<int> &ds, vector<int> nums, int freq[], int ind)
    {
        if(ind==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0; i<nums.size();i++)
        {
            if(!freq[i])
            {
                freq[i]=1;
                ds.push_back(nums[i]);
                findf(ans,ds,nums,freq,ind+1);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n=nums.size();
        int freq[n];
        for(int i=0;i<n;i++)
        freq[i]=0;
        findf(ans,ds,nums,freq,0);
        return ans;
    }
};