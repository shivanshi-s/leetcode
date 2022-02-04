class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0 ; 
        int n = nums.size();
        
        while(j < n)
        {
            if(nums[j] == val)
            {
                nums[j] = nums[n-1];
                n--;
            }
            else {
                j++;
            }
        }
        return n;
    }
};