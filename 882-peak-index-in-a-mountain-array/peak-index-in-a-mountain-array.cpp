class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=0;
        int right=arr.size();
        int ans=-1;
        while(left<right){
            int mid=(right+left)/2;
            if(arr[mid]>arr[mid+1]){
            ans=mid;
            right=right-1;
            }
            else{
                left=left+1;
            }
        }return ans;
    }
};