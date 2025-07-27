# Last updated: 27/07/2025, 22:03:12
class Solution:
    def addDigits(self, num: int) -> int:
        if num==0:
            return 0
        return 1+(num-1)%9
        