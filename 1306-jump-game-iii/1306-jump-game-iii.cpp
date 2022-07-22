class Solution {
public:
    bool solve(vector<bool>& vis, int i, int n, vector<int>&arr)
    {
        if(i<0||i>=n||vis[i]==true)
            return false;
        if(arr[i]==0)
        {
            vis[i]=true;
            return true;
        }
        
        vis[i]=true;
        return (solve(vis,i+arr[i],n,arr)||solve(vis,i-arr[i],n,arr));
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool>vis(arr.size()+1,false);
        return solve(vis,start,arr.size(),arr);
    }
};