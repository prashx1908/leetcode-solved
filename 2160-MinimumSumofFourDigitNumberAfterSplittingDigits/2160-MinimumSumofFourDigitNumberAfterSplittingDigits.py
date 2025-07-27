# Last updated: 27/07/2025, 21:31:30
class Solution:
    def minimumSum(self, num: int) -> int:
        d= sorted(str(num))
        return int(d[0]+d[2])+ int (d[1]+d[3])