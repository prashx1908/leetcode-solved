# Last updated: 25/05/2025, 00:09:15
class Solution(object):
    def countGoodSubstrings(self, s):
        n= len(s)
        count=0
    
        for i in range(n-2):
            subs= s[i:i+3]
            if len(set(subs))==3:
                count += 1
        return count
        