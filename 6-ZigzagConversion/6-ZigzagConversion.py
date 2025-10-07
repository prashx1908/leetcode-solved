# Last updated: 07/10/2025, 16:13:39
class Solution:
    def reverse(self, x: int) -> int:
        ans = int(str(abs(x))[::-1]) * (-1 if x<0 else 1)
        return ans if -2**31 <= ans < 2**31 else 0
