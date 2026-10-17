
class Solution {
public:
    void fun(vector<int>& candidates, int n, int target, int idx,
             vector<int>& diary, int sum, vector<vector<int>>& res) {

        if (sum == target) {
            res.push_back(diary);
            return;
        }

        if (idx == n) return;

        // Exclude
        fun(candidates, n, target, idx + 1, diary, sum, res);

        // Include
        if (sum + candidates[idx] <= target) {
            diary.push_back(candidates[idx]);

            fun(candidates, n, target, idx, diary,
                sum + candidates[idx], res);

            diary.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx = 0;
        int sum = 0;
        int n = candidates.size();

        vector<int> diary;
        vector<vector<int>> res;

        fun(candidates, n, target, idx, diary, sum, res);

        return res;
    }
};
