class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left =  0, right = 0;
        
        while (left < nums.size()) {
            
            if(nums[left] == 0) k--;
            if(k < 0){
                if (nums[right] == 0){
                    k++;
                }
                right++;
            }
            
            left++;
        }
        
        return left - right;
    }
};