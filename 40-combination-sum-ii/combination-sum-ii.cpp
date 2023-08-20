class Solution {
public:
    
    void findf(vector<vector<int>> &ans, vector<int> &candidates, vector<int>& v, int target, int ind)
    {
            if(target==0)
            {
                ans.push_back(v);
                return;
            }
        for(int i=ind;i<candidates.size();i++)
        {
            if(i>ind&&(candidates[i-1]==candidates[i]))
                continue;
            if(target<candidates[i])
                break;
            v.push_back(candidates[i]);
            findf(ans, candidates, v, target-candidates[i], i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> v;
    vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        findf(ans, candidates, v, target, 0);
        return ans;
    }
};