class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                st.push(i);
            } 
            else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                } 
                else {
                    s[i] = '*'; // Mark ')' for removal
                }
            }
        }
        
        while (!st.empty()) {
            s[st.top()] = '*'; // Mark '(' for removal
            st.pop();
        }
        
        string result = "";
        for (char c : s) {
            if (c != '*') {
                result += c;
            }
        }
        
        return result;
    }
};
