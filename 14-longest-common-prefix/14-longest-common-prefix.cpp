class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n = strs.size();
        string ans;
        
        if(n==0){
            return strs[0];
        }
        
        sort(strs.begin(),strs.end());
        
//         two string pointers 
        string a = strs[0];
        string b = strs[n-1];
        
        for(int i = 0 ; i < a.size(); i++)
        {
            if(a[i] == b[i])
                ans = ans+a[i];
            else
                break;
        }
        return ans;
    }
};