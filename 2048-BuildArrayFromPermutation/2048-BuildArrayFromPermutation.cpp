// Last updated: 28/05/2025, 11:52:32
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> temp (nums.size(),0);
        for(int i=0;i<nums.size();i++){
            temp[i]= nums[nums[i]];
        }
        
        return temp;
    }
};