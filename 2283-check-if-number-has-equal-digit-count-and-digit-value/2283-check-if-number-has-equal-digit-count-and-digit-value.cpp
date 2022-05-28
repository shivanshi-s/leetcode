class Solution {
public:
    bool digitCount(string num) {
        int n = num.length();
        int count = 0;
        bool ans = true;
        // char arr[n + 1];
        // strncpy(arr, num.c_str(), sizeof(arr));
        
        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < n ; j++){
                    if (num[j]- '0' == i)
                    {
                        count++;
                    }
            }
            if((num[i]-'0')!=count){
                ans=false;
        }
            count=0;
            
        }
        return ans;
    }
};