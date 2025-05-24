# Last updated: 25/05/2025, 00:09:24
class Solution(object):
    def reverseParentheses(self, s):
        stack=[]
        for ch in s:
            if ch ==')':
                temp =[]
                while stack and stack[-1] != '(':
                    temp.append(stack.pop())
                stack.pop()
                stack.extend(temp)
            else:
                stack.append(ch)
        return ''.join(stack)


            
        