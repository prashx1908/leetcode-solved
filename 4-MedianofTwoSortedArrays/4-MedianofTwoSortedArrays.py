# Last updated: 30/06/2026, 21:08:21
1class Solution:
2    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
3        if len(nums1)> len(nums2):
4            nums1, nums2= nums2, nums1
5
6        m,n= len(nums1), len(nums2)
7        total = m+n
8        half= (total +1)//2
9
10        left,right= 0, m
11        while left <= right:
12            i = (left+right)//2
13            j= half-i
14
15            aleft= float('-inf') if i == 0 else nums1[i - 1]
16            aright = float('inf') if i == m else nums1[i]
17
18            bleft= float('-inf') if j == 0 else nums2[j - 1]
19            bright = float('inf') if j == n else nums2[j]
20
21            if aleft <= bright and bleft <= aright:
22                if total%2==1:
23                    return max(aleft, bleft)
24                else:
25                    return (max(aleft,bleft) + min(aright,bright))/2
26                
27            elif aleft>bright:
28                right = i-1
29            
30            else:
31                left= i+1
32
33
34
35