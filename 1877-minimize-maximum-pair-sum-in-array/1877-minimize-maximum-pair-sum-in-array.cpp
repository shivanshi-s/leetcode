class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
//         initializes sum to the minimum value
        int sum = INT_MIN; 
//         sorting the array
        sort(nums.begin(),nums.end());
//         using the two-pointer approach
        for(int i = 0 ; i < n ; i++)
        {
            int temp = nums[i]+nums[n-1-i];
            if (temp > sum )
                sum = temp;
        }
        
        return sum;
    }
};