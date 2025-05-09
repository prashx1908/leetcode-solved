// Last updated: 09/05/2025, 22:16:25
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxwealth=0;

        for (int i=0;i<accounts.size();++i){
            int currentwealth=0;
            for(int j=0;j<accounts[i].size();++j){
                currentwealth += accounts[i][j];
            }
            if(currentwealth>maxwealth){
                maxwealth=currentwealth;
            }
        }
        return maxwealth;

    }

};