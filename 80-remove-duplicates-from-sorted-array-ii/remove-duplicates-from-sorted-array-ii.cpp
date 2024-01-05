class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int k=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>0)
            {
                nums[k++]=it->first;
                if(it->second>=2)
                    nums[k++]=it->first;
            }
        }
        return k;
    }
};