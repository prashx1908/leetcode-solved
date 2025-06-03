// Last updated: 03/06/2025, 09:38:39
class Solution {
public:
    int lengthOfLastWord(string s) {
        int end= s.length()-1;

        while(end>=0 && s[end]==' '){
            end--;
        }
        int start = end;
        while(start>=0 && s[start] !=' '){
            start--;
        }
        return end-start;
    }
};