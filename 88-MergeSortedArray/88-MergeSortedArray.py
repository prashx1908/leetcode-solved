# Last updated: 25/05/2025, 00:09:56
class Solution(object):
    def merge(self, nums1, m, nums2, n):
        nums1[:m+n]= sorted(nums1[:m]+nums2)
        