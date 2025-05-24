# Last updated: 25/05/2025, 00:10:16
class Solution(object):
    def isPalindrome(self, x):
        s1= str(x)
        if s1 == s1[::-1]:
            return True
        return False

        