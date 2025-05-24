# Last updated: 25/05/2025, 00:09:11
class Solution(object):
  def reversePrefix(self, word, ch) :
    i = word.find(ch) + 1
    return word[:i][::-1] + word[i:]