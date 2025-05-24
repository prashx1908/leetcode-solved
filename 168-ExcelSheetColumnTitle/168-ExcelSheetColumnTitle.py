# Last updated: 25/05/2025, 00:09:48
class Solution(object):
    def convertToTitle(self, columnNumber):
        res=[]
        while columnNumber:
            columnNumber, remainder= divmod(columnNumber-1, 26)
            res.append(chr(65+remainder))
        return ''.join(reversed(res))



        