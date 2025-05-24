# Last updated: 25/05/2025, 00:09:19
class Solution(object):
    def maxDepth(self, s):
        opened=0
        ans=0

        for c in s:
            if c=='(':
                opened +=1
                ans= max(opened,ans)
            elif c==')':
                opened -=1
        return ans
        