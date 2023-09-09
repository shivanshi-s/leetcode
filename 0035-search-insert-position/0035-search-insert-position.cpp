class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            int mid = (high + low)/2;
            
            //maybe an answer
            if(nums[mid] >= target){
                n = mid;
                //look for small on the left
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return n;
    }
};