// Last updated: 09/05/2025, 22:21:56
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;

        for(int i=0;i<nums.size();i++){
            string newnum= to_string(nums[i]);
    
        if(newnum.length() % 2==0){

            count += 1;

        }
        }
        return count;
        
    }
};