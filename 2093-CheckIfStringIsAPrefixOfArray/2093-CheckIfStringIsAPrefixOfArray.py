# Last updated: 25/05/2025, 00:09:13
class Solution(object):
    def isPrefixString(self, s, words):
       
        a= ''
        for i in words:
            a+= i

            if a==s:
                return True
            if not s.startswith(a):
                break
        return False