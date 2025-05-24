// Last updated: 25/05/2025, 00:09:40
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s==t){
            return true;
        }
        return false;
        
    }
};