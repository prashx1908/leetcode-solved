// Last updated: 14/04/2025, 20:24:54
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