# Last updated: 25/05/2025, 00:10:12
class Solution(object):
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""
        new=""
        strs= sorted(strs)
        first,last= strs[0], strs[-1]
        for i in range(len(first)):
            if i<len(last) and first[i]==last[i]:
                new+= first[i]
            else:
                break
        return new




        
        