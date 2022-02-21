class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int i = 0 ;
        int n = nums.size();
        
        for(int j = 0  ; j < n ; j++)
        {
            if(nums[j]!= val)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

//  int j = 0 ; 
//         int n = nums.size();
        
//         while(j < n)
//         {
//             if(nums[j] == val)
//             {
//                 nums[j] = nums[n-1];
//                 n--;
//             }
//             else {
//                 j++;
//             }
//         }
//         return n;