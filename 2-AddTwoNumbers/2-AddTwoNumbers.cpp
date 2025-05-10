// Last updated: 10/05/2025, 21:48:54
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