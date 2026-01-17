class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        z = 0
        one = 0
        two = 0
        for i in range(0, len(nums)):
            if nums[i] == 0:
                z+=1
            elif nums[i] == 1:
                one+=1
            else:
                two+=1
        for i in range(0, len(nums)):
            if(z != 0):
                nums[i] = 0
                z-=1
            elif(one !=0 ):
                nums[i] = 1
                one-=1
            else:
                nums[i] = 2
                two-=1
        