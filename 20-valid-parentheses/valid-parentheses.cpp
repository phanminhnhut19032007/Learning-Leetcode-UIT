class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char x: s)
        {
            if(x=='(' || x== '[' || x== '{')
            {
                st.push(x);
            }
            else{
               if(st.empty()) return false;
                char y = st.top();
               if (!((x == ')' && y == '(') || (x == '}' && y == '{') || (x == ']' && y == '[')))
                return false;
            st.pop();
            }
        }
        return st.empty();
    }
};