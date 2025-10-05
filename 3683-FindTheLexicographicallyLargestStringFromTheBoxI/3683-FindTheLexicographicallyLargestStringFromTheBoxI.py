# Last updated: 05/10/2025, 22:11:28
class Solution:
    def answerString(self, word: str, n: int) -> str:
        m= len(word)-n+1
        if n==1:
            return word
        return max(word[i:i+m] for i in range(len(word)))