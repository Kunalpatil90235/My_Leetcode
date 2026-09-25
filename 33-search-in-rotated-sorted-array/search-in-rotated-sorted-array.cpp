class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size() - 1;
        int left = 0;
        int right = n;

        while(left <= right) {

            int midd = (left + right) / 2;

            if(nums[midd] == target) {
                return midd;
            }

            // Left half is sorted
            if(nums[left] <= nums[midd]) {

                if(nums[left] <= target && target < nums[midd]) {
                    right = midd - 1;
                }
                else {
                    left = midd + 1;
                }
            }

            // Right half is sorted
            else {

                if(nums[midd] < target && target <= nums[right]) {
                    left = midd + 1;
                }
                else {
                    right = midd - 1;
                }
            }
        }

        return -1;
    }
};