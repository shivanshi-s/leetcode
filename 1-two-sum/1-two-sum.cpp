class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>res;
        vector<int>ans;
        
        for(int i = 0 ; i < nums.size(); i++){
            if (res.find(target - nums[i]) != res.end()) {
                ans.push_back(res[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            res[nums[i]] = i;
        }
        return ans;
    }
};