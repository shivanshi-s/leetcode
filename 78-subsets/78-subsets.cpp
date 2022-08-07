class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        int i,j;
        int n = nums.size();
        int powSize = pow(2,n);
        
        for(i = 0 ; i< powSize ; i++)
        {
//for storing output values of power set elements i.e. subsets at each recursion level
        vector<int> output;
            
            for(j = 0; j < n; j++)
            {
                if ((i & (1 << j)) != 0)
                    output.push_back(nums[j]);
            }
            ans.push_back(output);
        }
        return ans;
    }
};