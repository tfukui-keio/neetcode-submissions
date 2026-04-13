class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, int> close_to_open = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        std::stack<char> stack;

        for (char c: s) {
            if (close_to_open.count(c)) {
                if (!stack.empty() &&stack.top() == close_to_open[c]) {
                    stack.pop();
                }
                else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
