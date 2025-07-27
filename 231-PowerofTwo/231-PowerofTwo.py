# Last updated: 27/07/2025, 22:00:33
class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        return n>0 and (n&(n-1))==0
        
        