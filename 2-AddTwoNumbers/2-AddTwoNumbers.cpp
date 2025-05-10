// Last updated: 10/05/2025, 22:00:28
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