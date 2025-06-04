# Last updated: 04/06/2025, 09:39:57
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res=[]
        def backtrack(current,open_c,close):
            if open_c==n and close ==n:
                res.append(current)
                return
            if open_c<n:
                backtrack(current + '(', open_c +1, close)
            if close < open_c:
                backtrack(current+')', open_c, close+1)
        backtrack("",0,0)
        return res