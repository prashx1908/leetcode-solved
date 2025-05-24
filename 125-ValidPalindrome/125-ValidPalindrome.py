# Last updated: 25/05/2025, 00:09:54
class Solution:
    def isPalindrome(self, s):
        s = s.lower()
        l, r = 0, len(s) - 1
        
        while l < r:
            if not s[l].isalnum():
                l += 1
            elif not s[r].isalnum():
                r -= 1
            elif s[l] != s[r]:
                return False
            else:
                l += 1
                r -= 1
                
        return True
