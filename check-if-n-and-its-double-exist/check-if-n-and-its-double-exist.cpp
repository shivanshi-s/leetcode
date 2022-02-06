class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        int one = 0;
        int two = 0;
        
        for (one = 0; one < arr.size(); one++)
        {
            int n = arr[one];
            
            for (two = one + 1; two < arr.size(); two++) 
            {
                int m = arr[two];
                if ( arr[one] == (2 * arr[two]) || arr[two] == (2 * arr[one])) 
                 {
                    return true;
                 }
            }
        }
    
        return false;
    }
};