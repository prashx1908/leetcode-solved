// Last updated: 25/05/2025, 00:09:32
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;

        for(string i:operations){
            if(i=="C"){
                st.pop();
            
            }
            else if (i=="D"){
            st.push(2*st.top());

            }

            else if(i=="+"){
                int t1= st.top();st.pop();
                int t2= st.top();
                int t3= t1+t2;
                st.push(t1);
                st.push(t3);
            }

            else{
                st.push(stoi(i));
            }
        }
        int res=0;
        while(!st.empty()){
            res += st.top();
            st.pop();

        }
        
       
            

        
         return res;
    }
               
    
};