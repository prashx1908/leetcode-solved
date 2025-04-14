// Last updated: 14/04/2025, 20:21:06
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if (nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};