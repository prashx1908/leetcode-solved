# Last updated: 25/05/2025, 00:10:17
class Solution(object):
    def twoSum(self, nums, target):

        num_map ={}
        for i, num in enumerate(nums):
            complement = target-num
            if complement in num_map:
                return [num_map[complement],i]
            num_map[num]=i
        return []


        

        