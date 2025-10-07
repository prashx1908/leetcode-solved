# Last updated: 07/10/2025, 16:42:52
class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:

        tlist=[]
        for ch in t:
            tlist.append(ch)
        
        i=0
        while (i<len(s)):
            try:
                if (tlist[i] != s[i]):
                    del(tlist[i])
                    i -=1
                i+=1
            except:
                return False
        return True
        