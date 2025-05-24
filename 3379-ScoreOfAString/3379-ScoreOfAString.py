# Last updated: 25/05/2025, 00:09:10
class Solution:
    def scoreOfString(self, s):
        total = 0
        for i in range(len(s) - 1):
            total += abs(ord(s[i]) - ord(s[i + 1]))
        return total