// Last updated: 05/10/2025, 22:11:33
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        int left=0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
            if((nums[i]>nums[left]&&nums[i]>nums[i+1]) ||
            (nums[i]<nums[left]&&nums[i]<nums[i+1])){
                count++;
            }
            left=i;
        }
        }
        return count;
        
    }
};