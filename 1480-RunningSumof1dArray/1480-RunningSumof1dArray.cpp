// Last updated: 25/03/2025, 20:14:33
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        for(int i =1;i<nums.size();i++){
            nums[i] += nums[i-1];
      
        }

        return nums;





        
    }
};