class Solution {
public:

    long long flex(vector<int>& piles, int speed) {
        long long hours = 0;

        for(int i = 0; i < piles.size(); i++) {
            hours += piles[i] / speed;

            if(piles[i] % speed != 0) {
                hours++;
            }
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int res = right;

        while(left <= right) {

            int mid = left + (right - left) / 2;

            long long hours = flex(piles, mid);

            if(hours > h) {
                left = mid + 1;
            }
            else {
                res = mid;
                right = mid - 1;
            }
        }

        return res;
    }
};