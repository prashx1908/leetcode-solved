// Last updated: 25/05/2025, 00:09:35
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    result.push_back(nums1[i]);
                    nums2[j] = -1;
                    break;
                }
            }
        }
        return result;
        
    }
};