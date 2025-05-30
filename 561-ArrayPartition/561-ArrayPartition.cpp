// Last updated: 30/05/2025, 08:55:40
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int>n;
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            sum += nums[i];
        }
        return sum;
    }

};