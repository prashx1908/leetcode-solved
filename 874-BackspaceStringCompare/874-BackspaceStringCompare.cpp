// Last updated: 25/05/2025, 00:09:31
class Solution {
public:

    string strbuld(string str){
        stack<char>st;
        for(char ch: str){

            if(ch=='#'){
                if(!st.empty()){
                    st.pop();
                }
            }
        
            else{
                st.push(ch);
            }
        }
        

            string res="";
            while(!st.empty()){
                res= st.top()+res;
                st.pop();

            }
            return res;
        }
    

    bool backspaceCompare(string s, string t) {
        return strbuld(s) == strbuld(t);
        
    }

};