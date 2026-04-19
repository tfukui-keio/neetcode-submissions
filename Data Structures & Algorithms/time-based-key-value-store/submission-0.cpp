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
        for (int i{0}; i < data.size(); i++) {
            if (data[i].first <= timestamp) result = data[i].second;
            else break;
        }
        return result;
    }
    
private:
    std::unordered_map<std::string,std::vector<std::pair<int, std::string>>> mp;
};
