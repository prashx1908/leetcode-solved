# Last updated: 25/05/2025, 00:10:03
class Solution(object):
    def firstMissingPositive(self, nums):
        nums= set(nums)
        nums= list(nums)
        nums.sort()
        cur=2
        if 1 in nums:
            i = nums.index(1)
            for j in range(i+1, len(nums)):
                if nums[j]==cur:
                    cur = cur+1
                else:
                    return cur
            return cur
        else:
            return 1
   
            
            

        
        