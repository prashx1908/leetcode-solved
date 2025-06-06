// Last updated: 03/06/2025, 09:52:59
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int mid, start=0,end= n-1;

        while(start<=end){
            mid= start+ (end-start)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if (nums[mid]<target){
                start= mid+1;
            }
            else{
                end= mid-1;
            }
        }
        return -1;
    }
};