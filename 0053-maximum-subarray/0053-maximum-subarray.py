class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = nums[0]
        max_ans = nums[0]
        for i in range(1,len(nums)):
            max_ans = max(max_ans + nums[i],nums[i])
            res = max(res, max_ans)
        return res