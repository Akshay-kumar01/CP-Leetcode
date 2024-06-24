class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        map<int, int> mp;
        int maxEle=INT_MIN;
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        if(n==0)
            return 0;
        int s=1, ans=INT_MIN;
        cout<<mp.size();
        for(auto it=mp.begin();it!=mp.end();it++){
            int a=it->first;
            a++;
            auto j=mp.find(a);
            if(j==mp.end())
            {
                ans=max(ans, s);
                s=1;
            }
            else
                s++;
        }
        return ans;
    }
};