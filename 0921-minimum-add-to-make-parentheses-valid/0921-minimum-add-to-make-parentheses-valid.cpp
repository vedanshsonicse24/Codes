class Solution {
public:
    int minAddToMakeValid(string s) {
        
      int ans = 0;
        stack <char> st;
        for(char ch:s){

            if(st.empty()|| ch=='('){
                ans = ans+1;
                st.push(ch);
                continue;
            }
            if(ch==')'){
                ans = ans+1;
                if(st.top()=='('){
                    ans = ans-2;
                    st.pop();
                }
            }
       
        }
         return ans;
        
    }
};

