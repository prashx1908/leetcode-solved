// Last updated: 25/05/2025, 00:09:20
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        for(int i =1;i<nums.size();i++){
            nums[i] += nums[i-1];
      
        }

        return nums;





        
    }
};