class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int f=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if((nums[i]|nums[j])%2==0)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
            return true;
        else
            return false;
    }
};