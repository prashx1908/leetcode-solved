# Last updated: 25/05/2025, 00:09:25
class Solution(object):
    def maxNumberOfBalloons(self, text):
        b= text.count('b')
        a= text.count('a')
        l= text.count('l')//2
        o= text.count('o')//2
        n= text.count('n')

        return min(b,a,l,o,n)

        