class Solution {
public:
    vector<vector<int>> ans;
    void findf(vector<int> &candidates, int ind, int target, vector<int> &v)
    {
        if(ind==candidates.size())
        {
            if(target==0)
                ans.push_back(v);
            return;
        }
        if(target>=candidates[ind])
        {
            v.push_back(candidates[ind]);
            findf(candidates, ind, target-candidates[ind], v);
            v.pop_back();
        }
            findf(candidates, ind+1, target, v);
        }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        findf(candidates, 0, target, v);
        return ans;
    }
};