// Last updated: 25/03/2025, 20:38:36
class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int total=0, lef=0, rig=0;

        for(int num : nums){
            total += num;
        }
        for(int i=0;i<nums.size();i++){
            if(lef == total-lef  -nums[i]){
                return i;}
            lef+= nums[i];
            
        }

    return -1;
        
    }
};