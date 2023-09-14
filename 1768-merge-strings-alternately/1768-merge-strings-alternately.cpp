class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        string ans = "";
        int ptr1 =0;
        int ptr2 = 0;
        
        //merge strings alternatively
        while (ptr1 < n and ptr2 < m){
            ans.push_back(word1[ptr1++]);
            ans.push_back(word2[ptr2++]);
        }
        
        //merge remaining strings
        while(ptr1 < n){
            ans.push_back(word1[ptr1++]);
             // ans.push_back(word2[ptr2++]);
            
        }
        while(ptr2 < m){
            ans.push_back(word2[ptr2++]);
        }
        
        return ans;
    }
    
};