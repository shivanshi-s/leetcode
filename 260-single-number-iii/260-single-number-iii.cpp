class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        long long xorres = 0;
        int res1 =  0, res2 = 0;
        for(long long i = 0; i < n; i++)
        {
            xorres = xorres  ^ nums[i]; //xor of all sorted numbers
        }
//         gives the noumber only last bit set (right most set bit)
       long long sn = xorres & ~(xorres-1);
        
        for(long long i = 0; i < n; i++)
        {
//             check if the number has that set bit
            if( (nums[i] & sn) != 0 ) 
//                 set bit as 1 else 0
                res1 = res1 ^ nums[i];
            else
                res2 = res2 ^ nums[i];
        }
        
        return {res1,res2};
    }
};