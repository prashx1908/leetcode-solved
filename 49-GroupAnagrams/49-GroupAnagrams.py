# Last updated: 25/05/2025, 00:09:59
class Solution(object):
    def groupAnagrams(self, strs):
        anagrams={}
        for word in strs:
            sorted_word= ''.join(sorted(word))
            if sorted_word in anagrams:
                anagrams[sorted_word].append(word)
            else:
                anagrams[sorted_word]= [word]
        return list(anagrams.values())
        