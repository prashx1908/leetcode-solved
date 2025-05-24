// Last updated: 25/05/2025, 00:10:07
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] !=val){
                nums[k++] = nums[i];
            }
        }
        return k;
    }
    
};