# Last updated: 05/10/2025, 22:20:20
class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels=[ i for i in s if i in "aeiouAEIOU"]
        result= [i if i not in "aeiouAEIOU" else vowels.pop() for i in s]
        return "".join(result)
        