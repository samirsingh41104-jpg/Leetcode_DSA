class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int x : nums) count[x]++;

        using P = pair<int, int>; 
        priority_queue<P, vector<P>, greater<P>> pq;

        for (auto [val, freq] : count) {
            pq.push({freq, val});
            if (pq.size() > k) pq.pop();
        }

        vector<int> res;
        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};