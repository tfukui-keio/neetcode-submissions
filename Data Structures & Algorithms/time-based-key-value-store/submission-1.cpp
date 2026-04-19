class TimeMap {
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        // Goal
        // key: {timestamp1: value1}, {timestamp2, value2} ...
        mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (mp.find(key) == mp.end()) return "";

        std::string result{""};
        auto &data = mp[key];
        // for (int i{0}; i < data.size(); i++) {
        //     if (data[i].first <= timestamp) result = data[i].second;
        //     else break;
        // }

        int left{0}; int right{(int)data.size()-1};
        while (left <= right) {
            int mid = (left + right) / 2;

            if (data[mid].first <= timestamp) {
                result = data[mid].second; // 候補更新
                left = mid + 1;            // もっと右探す
            } else {
                right = mid - 1;
            }
        }

    return result;
    }
    
private:
    std::unordered_map<std::string,std::vector<std::pair<int, std::string>>> mp;
};
