class Solution {
public:
    string removeDuplicates(string s, int k) {

        int n = s.size();
        stack<pair<char, int>> st;

        for (int i = 0; i < n; i++) {

            char c = s[i];

            // Stack is empty
            if (st.empty()) {
                st.push({c, 1});
                continue;
            }

            // Different character
            if (st.top().first != c) {
                st.push({c, 1});
                continue;
            }

            // Same character
            if (st.top().second < k - 1) {
                pair<char, int> p = st.top();
                st.pop();

                st.push({p.first, p.second + 1});
                continue;
            }

            // Count becomes k -> remove it
            st.pop();
        }

        // Construct answer
        string ans = "";

        while (!st.empty()) {
            pair<char, int> p = st.top();
            st.pop();

            ans += string(p.second, p.first);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};