class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // sort and then sliding window technique O(nlogn)
        sort(begin(nums), end(nums));
        long left = 0, right = 0;
        long res = 0;
        long total = 0;
        
        while ( right < nums.size()){
            total += nums[right];
            
            while( nums[right] * (right-left+1) > total + k){
                total -= nums[left];
                left += 1;
            } 
            
            res = max(res, right-left+1 );
            right +=1;
        }
        return res;
    }
};