class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        if(nums.size()<4)
            return ans;
        sort(nums.begin(),nums.end());
        // auto ip=unique(nums.begin(),nums.end());
        // nums.resize(std::distance(nums.begin(), ip+4));
        for(int i=0;i<nums.size()-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<nums.size()-2;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1])
                    continue;
                long long int sum=nums[i]+nums[j];
                int k=j+1,l=nums.size()-1;
                while(k<l)
                {
                    // cout<<nums[i]<<nums[j]<<nums[k]<<nums[l]<<endl;
                    // long long sum=nums[i]+nums[j]+nums[k]+nums[l];
                    if((sum+nums[k]+nums[l])==target)
                    {
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[k]);
                        v.push_back(nums[l]);
                        ans.push_back(v);
                        // v.clear();
                        k++;
                    }
                    else if((sum+nums[k]+nums[l])<target)
                        k++;
                    else
                        l--;
                }
            }
        }
        sort(ans.begin(),ans.end());
        auto it=unique(ans.begin(),ans.end());
        ans.resize(std::distance(ans.begin(), it));
        return ans;
    }
};