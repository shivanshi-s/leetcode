class Solution {
public:
    int singleNumber(vector<int>& nums) {
// XOR operation -> do XOR for all numbers, even numbers will cancel out with each other
// as per property X ^X = 0, since ans stores the numbers, the number that doesnt amount to zero will be the answer.
        
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            ans = ans ^ nums[i]; 
        }
        return ans;
    }
};