class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums, goal) - atmost(nums, goal - 1);
    }
    
    int atmost(vector<int> nums, int k){
        int sum = 0;
        int start = 0, end = 0, cnt = 0;
        while (end < nums.size()) {
            sum += nums[end++];
            while( start < end && sum > k)
                sum -= nums[start++];
                // cnt += end - start;
            
            cnt += end - start;
        }
        return cnt;
    }
};