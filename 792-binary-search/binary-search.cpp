class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int guess=(left+right)/2;

            if(nums[guess]==target){
                return guess;
            }
            else if(nums[guess]>target){
                right=guess-1;
            }
            else{
                left=guess+1;
            }
        }
        return -1;
    }
};