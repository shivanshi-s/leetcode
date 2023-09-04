class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low  = 0;
        int high = n -1;
        
        while( low <= high) {
           int mid = low+(high- low)/2;  
            // result is the average of left and right, it must be between them. Since these are both less than the maximum integer, anything between them is also less than the maximum, so there's no overflow.
            if(nums[mid] == target) return mid;
            else if(nums[mid]>target) high=mid-1;
            else low = mid+1;
        }
        return -1;
    }
};