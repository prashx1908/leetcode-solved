// Last updated: 25/05/2025, 00:09:55
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy= prices[0];
        int profit=0;

        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            else if (prices[i]- buy >profit){
                profit= prices[i]-buy;
            }
        }
        return profit;

        
    }
};