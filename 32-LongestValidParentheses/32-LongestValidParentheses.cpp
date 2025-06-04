// Last updated: 04/06/2025, 11:33:23
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int maxLen = 0;
        st.push(-1);  // base for valid substring

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i);  // reset base
                } else {
                    maxLen = max(maxLen, i - st.top());
                }
            }
        }
        return maxLen;
    }
};