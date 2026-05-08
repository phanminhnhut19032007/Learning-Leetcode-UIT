class Solution {
public:
    int evalRPN(vector<string>& tokens) {
          stack<int> st;
        for(string &s :tokens){
        if (s == "+" || s == "-" || s == "*" || s == "/") {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();
          st.push(TinhToan(s[0], val1, val2));
        } 
        else {
            st.push(stoi(s)); 
        }
    }
      return st.top();
    }

    
private:
    int TinhToan(char op, int a, int b) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : 0;
        default: return 0;
    }
}
};