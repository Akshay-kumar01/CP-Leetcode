class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
            cout<<nums[i];
        int p1=nums[0]*nums[1]*nums[2];
        int p2=nums[n-1]*nums[n-2]*nums[n-3];
        int p3=nums[0]*nums[1]*nums[n-1];
        int p4=nums[0]*nums[n-1]*nums[n-2];
        int m1=max(p1,p2);
        int m2=max(p3,p4);
        return max(m1,m2);
    }
};