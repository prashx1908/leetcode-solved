# Last updated: 25/05/2025, 00:09:28
class Solution(object):
    def reverseOnlyLetters(self, s):
        s_l= list(s)
        l,r=0,len(s)-1

        while l<r:
            if not s_l[l].isalpha():
                l+=1
            elif not s[r].isalpha():
                r-=1
            else:
                s_l[l],s_l[r]= s_l[r],s_l[l]
                l+=1
                r-=1
        return ''.join(s_l)
        