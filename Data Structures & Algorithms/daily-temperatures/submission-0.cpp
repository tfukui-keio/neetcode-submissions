class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    std::pair<int,int> max_value{0,0};
        std::vector<int> ans(temperatures.size(),0);
        std::stack<pair<int,int>> st; // {temp, index}

        for (int i{0}; i< temperatures.size(); i++) {
            int t = temperatures[i];
            while (!st.empty() && t>st.top().first) {
                auto pair_val = st.top();
                st.pop();
                ans[pair_val.second] = i-pair_val.second;
            }
            st.push({t,i});
        }
        return ans;
    }
};
