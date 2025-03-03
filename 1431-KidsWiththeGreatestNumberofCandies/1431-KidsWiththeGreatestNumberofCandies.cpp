class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int max_cand= *max_element(candies.begin(), candies.end());
        vector<bool> result(candies.size());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= max_cand){
                result[i]= true;
            }
            else{
                result[i]= false;
            }
        }
        return result;
        
    }
};