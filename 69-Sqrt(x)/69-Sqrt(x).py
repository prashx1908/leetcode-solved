# Last updated: 06/10/2025, 14:49:05
class Solution:
    def mySqrt(self, x: int) -> int:
        return bisect_right(range (x+1), 0 , key=lambda q:q*q-x)-1

        