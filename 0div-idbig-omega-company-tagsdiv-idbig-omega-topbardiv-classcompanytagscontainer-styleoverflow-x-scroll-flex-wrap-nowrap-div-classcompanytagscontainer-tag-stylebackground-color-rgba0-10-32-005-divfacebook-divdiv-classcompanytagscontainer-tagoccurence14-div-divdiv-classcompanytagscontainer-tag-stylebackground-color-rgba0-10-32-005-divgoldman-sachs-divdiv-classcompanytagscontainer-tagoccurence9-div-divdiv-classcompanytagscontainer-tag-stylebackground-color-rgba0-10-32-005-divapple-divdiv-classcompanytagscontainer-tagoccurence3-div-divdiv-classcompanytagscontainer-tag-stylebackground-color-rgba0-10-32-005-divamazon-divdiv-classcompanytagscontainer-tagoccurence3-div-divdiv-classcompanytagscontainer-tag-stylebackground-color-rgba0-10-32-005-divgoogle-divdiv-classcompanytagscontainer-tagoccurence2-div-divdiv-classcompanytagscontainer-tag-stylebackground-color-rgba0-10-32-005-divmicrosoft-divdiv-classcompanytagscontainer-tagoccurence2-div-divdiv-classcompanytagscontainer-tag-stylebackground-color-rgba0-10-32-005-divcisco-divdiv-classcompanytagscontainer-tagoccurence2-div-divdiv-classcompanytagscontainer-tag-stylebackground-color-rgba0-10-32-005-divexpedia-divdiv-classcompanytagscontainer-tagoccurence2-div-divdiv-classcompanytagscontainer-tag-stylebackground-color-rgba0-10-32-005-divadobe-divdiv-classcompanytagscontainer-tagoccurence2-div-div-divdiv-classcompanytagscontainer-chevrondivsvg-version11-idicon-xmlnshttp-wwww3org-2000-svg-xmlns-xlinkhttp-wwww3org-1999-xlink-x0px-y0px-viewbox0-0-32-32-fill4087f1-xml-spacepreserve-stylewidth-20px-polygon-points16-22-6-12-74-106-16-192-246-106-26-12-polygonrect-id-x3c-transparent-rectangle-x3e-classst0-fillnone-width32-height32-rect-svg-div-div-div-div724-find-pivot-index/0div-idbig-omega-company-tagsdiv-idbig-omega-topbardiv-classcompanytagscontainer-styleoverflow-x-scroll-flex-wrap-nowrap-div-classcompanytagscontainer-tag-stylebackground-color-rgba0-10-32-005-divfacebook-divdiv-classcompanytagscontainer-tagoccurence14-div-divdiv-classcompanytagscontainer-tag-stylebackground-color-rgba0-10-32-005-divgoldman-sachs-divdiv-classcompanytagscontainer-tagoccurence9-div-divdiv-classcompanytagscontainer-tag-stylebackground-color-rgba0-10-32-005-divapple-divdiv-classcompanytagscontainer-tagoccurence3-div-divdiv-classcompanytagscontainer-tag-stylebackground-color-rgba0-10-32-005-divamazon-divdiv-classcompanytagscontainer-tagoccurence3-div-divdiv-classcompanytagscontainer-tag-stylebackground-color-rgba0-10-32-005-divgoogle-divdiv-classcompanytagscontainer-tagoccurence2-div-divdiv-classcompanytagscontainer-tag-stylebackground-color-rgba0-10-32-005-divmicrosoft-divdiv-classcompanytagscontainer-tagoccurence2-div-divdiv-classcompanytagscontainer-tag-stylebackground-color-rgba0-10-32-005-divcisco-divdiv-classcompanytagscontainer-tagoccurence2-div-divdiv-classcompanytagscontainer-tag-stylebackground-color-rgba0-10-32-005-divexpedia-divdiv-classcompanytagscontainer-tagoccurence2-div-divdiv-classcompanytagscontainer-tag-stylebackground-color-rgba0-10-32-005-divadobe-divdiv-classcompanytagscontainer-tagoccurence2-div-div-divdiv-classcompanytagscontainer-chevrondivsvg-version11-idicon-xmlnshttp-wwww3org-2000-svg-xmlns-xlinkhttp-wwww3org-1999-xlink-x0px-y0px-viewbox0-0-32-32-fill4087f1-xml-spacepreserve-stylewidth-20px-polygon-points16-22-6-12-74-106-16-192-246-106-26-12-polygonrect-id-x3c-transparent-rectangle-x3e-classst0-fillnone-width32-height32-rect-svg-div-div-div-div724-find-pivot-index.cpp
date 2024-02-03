class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefix_sum = 0;
        int left_sum = 0;
        
        
        for(int i = 0 ; i < nums.size(); i++) { 
            prefix_sum += nums[i];
        }
        
        int right_sum = prefix_sum;
        
        for(int i = 0; i < nums.size(); i++) {
            right_sum -= nums[i];
            
            if(left_sum == right_sum) return i;
            
            left_sum +=nums[i];
        }
        return -1;
    }
};