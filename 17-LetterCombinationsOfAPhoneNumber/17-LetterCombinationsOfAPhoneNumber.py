# Last updated: 25/05/2025, 00:10:11
class Solution(object):
    def letterCombinations(self, digits):
        dic={"2": "abc", "3":"def","4":"ghi", "5":"jkl", "6":"mno", "7":"pqrs", "8":"tuv","9":"wxyz"}

        res=[]
        if len(digits)==0:
            return res
        self.dfs(digits, 0, dic, '', res)
        return res
        
    def dfs(self, nums, index, dic, path, res):
        if index >= len(nums):
            res.append(path)
            return
        str1= dic[nums[index]]
        for i in str1:
            self.dfs(nums, index+1, dic, path+i, res)

        
        