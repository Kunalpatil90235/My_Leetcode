class Solution {
public:
    int reverseDegree(string s) {
        int count = 1;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            int value = 'z'-s[i]+1;
            ans += value * count;
            count++;

        }
        return ans;
    }
};