// Last updated: 05/10/2025, 22:12:05
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::sort(nums.begin(),nums.end(), std::greater<int>());
        return nums[k-1];
        
    }
};