class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        bool loop = false;
            
            if(m == 0) return 0;
            if ( n < m ) return -1;
        
        for(int i = 0; i <= (n-m) ; i++){
                
                loop = true;
                int indx;
        
            for( int j = 0 ; j < m ; j++){
                
                if (needle[j] != haystack[i+j]){
                    
                    loop = false;
                    break;
                }
                indx = i;
            }
            if(loop) 
                return indx;
            
        }
        return -1;
    }
};