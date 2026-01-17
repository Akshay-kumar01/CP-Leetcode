class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        sum=0
        ans=-10**5
        for num in nums:
            sum+=num
            ans=max(sum,ans)
            if(sum<0):
                sum=0
        return ans