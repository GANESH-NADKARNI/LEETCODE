class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length() == 1){
            return false;
        }
        for(char ch: s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(ch == ')' && (st.top() == '{' || st.top() == '[')){
                    return false;
                }
                if(ch == '}' && (st.top() == '(' || st.top() == '[')){
                    return false;
                }
                if(ch == ']' && (st.top() == '(' || st.top() == '{')){
                    return false;
                }

                st.pop();
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};