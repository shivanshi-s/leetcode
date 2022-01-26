class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        
        vector<int>ans(n);
        
        for (int res = n-1 ; res >= 0 ; res--)
        {
          if ( abs(nums[end]) > abs(nums[start]) )
          {ans[res] = nums[end]*nums[end--];
                }
          else
          {ans[res] = nums[start]*nums[start++];
                
          }
        }
        return ans;
    }
};