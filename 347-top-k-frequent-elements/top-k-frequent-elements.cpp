class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> f;

        // Count frequency
        for(int i = 0; i < nums.size(); i++) {
            f[nums[i]]++;
        }

        // Min heap: {frequency, element}
        priority_queue<pair<int,int>,
                       vector<pair<int,int>>,
                       greater<pair<int,int>>> pq;

        for(auto i : f) {
            int element = i.first;
            int freq = i.second;

            pair<int,int> curr = {freq, element};

            if(pq.size() < k) {
                pq.push(curr);
            }
            else if(curr.first > pq.top().first) {
                pq.pop();
                pq.push(curr);
            }
        }

        vector<int> res;

        while(!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};