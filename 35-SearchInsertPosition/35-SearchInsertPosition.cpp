// Last updated: 25/05/2025, 00:10:04
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        for(int i=0;i<nums.size();++i){
            if(nums[i]>=target){
                return i;
            }
        }
     
        return nums.size();
    }
};