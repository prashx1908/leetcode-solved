// Last updated: 03/06/2025, 10:17:17
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::sort(nums.begin(),nums.end(), std::greater<int>());
        return nums[k-1];
        
    }
};