class Solution {
public:
    std::array<int,2> getXY(std::stack<int> &st) {
        int y = st.top();
        st.pop();
        int x = st.top();
        st.pop();
        return {x,y};
    }
    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;
        for (const auto &token:tokens) {
            if (token == "*") {
                auto [x,y] = getXY(st);
                st.push(x*y);
            } else if (token == "-") {
                auto [x,y] = getXY(st);
                st.push(x-y);
            } else if (token == "+") {
                auto [x,y] = getXY(st);
                st.push(x+y);
            } else if (token == "/") {
                auto [x,y] = getXY(st);
                st.push(x/y);
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
