# Last updated: 25/05/2025, 00:10:13
class Solution(object):
    def romanToInt(self, s):
        roman_to = { "I" : 1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        res=0
        for i in range(len(s)):
            if (i+1)<len(s) and  roman_to[s[i]] < roman_to[s[i+1]]:
                res -= roman_to[s[i]]
            else:
                res += roman_to[s[i]]
        return res
                
        