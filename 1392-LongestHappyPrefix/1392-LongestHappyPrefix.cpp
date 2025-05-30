// Last updated: 30/05/2025, 11:09:33
class Solution {
public:
    string longestPrefix(string s) {
        vector<int> dp(s.size(), 0);
        int len=0;
        int i=1;
        while(i<s.size()){
            if(s[i]==s[len]){
                dp[i]= ++len;
                i++;
            }
            else {
                if(len>0){
                len= dp[len-1];
            }
            else{
                dp[i]=0;
                i++;
            }
            }
        }
        return s.substr(0,dp.back());
        
    }
};