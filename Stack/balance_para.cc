class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for( char i : s){
            if (i == '(' || i == '{' || i == '[') {
                st.push(i);
            }
            else{
                if( st.empty()){
                    return false;
                } 
                if(i == ')' && st.top() == '('){
                st.pop();
                }else if(i == '}' && st.top() == '{'){
                    st.pop();
                }else if(i == ']' && st.top() == '['){
                    st.pop();
                }else{
                    return false;
                }

            }
        }
        if(st.size() == 0){
            return true;
        }else{
            return false;
        }
    }
};