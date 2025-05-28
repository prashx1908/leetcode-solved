// Last updated: 28/05/2025, 09:59:01
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+ (nums.size()-k));
        reverse(nums.begin()+ (nums.size()-k), nums.end());
        reverse(nums.begin(),nums.end());

        
    }
};