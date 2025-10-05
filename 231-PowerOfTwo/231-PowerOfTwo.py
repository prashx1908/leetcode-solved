# Last updated: 05/10/2025, 22:12:03
class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        return n>0 and (n&(n-1))==0
        
        