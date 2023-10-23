class Solution {
private: 
    void solve(vector<int> nums, vector<int> output, int index,vector<vector<int>>& ans) { //ans is to be returned so by reference being stored
        if (index>= nums.size()){
            ans.push_back(output);
            return;
        }
        //exlude wala call
        solve(nums, output, index+1, ans);
        //include - element to be included in the output and call again
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector <int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};