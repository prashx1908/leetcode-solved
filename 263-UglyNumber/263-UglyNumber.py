# Last updated: 25/05/2025, 00:09:38
class Solution(object):
    def isUgly(self, n):
        if n ==0:
            return False
        for i in 2,3,5:
            while n % i == 0:
                n /= i
        return n==1 
        