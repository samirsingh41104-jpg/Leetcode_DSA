class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(const auto& it : nums){
            mp[it]++;
        }

        vector<pair<int, int>> resPair;
        for(const auto& res : mp){
            resPair.push_back({res.second, res.first});
        }
        sort(resPair.rbegin(), resPair.rend());
        vector<int> res;
        for(int i = 0 ; i < k ; i++){
            res.push_back(resPair[i].second);
        }

        return res;

    }
};