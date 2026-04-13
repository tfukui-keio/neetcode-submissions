class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;
        for (const auto &token:tokens) {
            if (token == "*") {
                int y = st.top();
                st.pop();
                int x = st.top();
                st.pop();
                st.push(x*y);
            } else if (token == "-") {
                int y = st.top();
                st.pop();
                int x = st.top();
                st.pop();
                st.push(x-y);
            } else if (token == "+") {
                int y = st.top();
                st.pop();
                int x = st.top();
                st.pop();
                st.push(x+y);
            } else if (token == "/") {
                int y = st.top();
                st.pop();
                int x = st.top();
                st.pop();
                st.push(x/y);
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
