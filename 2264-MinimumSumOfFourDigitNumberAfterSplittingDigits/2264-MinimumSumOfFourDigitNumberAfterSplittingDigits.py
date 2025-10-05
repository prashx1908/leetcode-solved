# Last updated: 05/10/2025, 22:11:34
class Solution:
    def minimumSum(self, num: int) -> int:
        d= sorted(str(num))
        return int(d[0]+d[2])+ int (d[1]+d[3])