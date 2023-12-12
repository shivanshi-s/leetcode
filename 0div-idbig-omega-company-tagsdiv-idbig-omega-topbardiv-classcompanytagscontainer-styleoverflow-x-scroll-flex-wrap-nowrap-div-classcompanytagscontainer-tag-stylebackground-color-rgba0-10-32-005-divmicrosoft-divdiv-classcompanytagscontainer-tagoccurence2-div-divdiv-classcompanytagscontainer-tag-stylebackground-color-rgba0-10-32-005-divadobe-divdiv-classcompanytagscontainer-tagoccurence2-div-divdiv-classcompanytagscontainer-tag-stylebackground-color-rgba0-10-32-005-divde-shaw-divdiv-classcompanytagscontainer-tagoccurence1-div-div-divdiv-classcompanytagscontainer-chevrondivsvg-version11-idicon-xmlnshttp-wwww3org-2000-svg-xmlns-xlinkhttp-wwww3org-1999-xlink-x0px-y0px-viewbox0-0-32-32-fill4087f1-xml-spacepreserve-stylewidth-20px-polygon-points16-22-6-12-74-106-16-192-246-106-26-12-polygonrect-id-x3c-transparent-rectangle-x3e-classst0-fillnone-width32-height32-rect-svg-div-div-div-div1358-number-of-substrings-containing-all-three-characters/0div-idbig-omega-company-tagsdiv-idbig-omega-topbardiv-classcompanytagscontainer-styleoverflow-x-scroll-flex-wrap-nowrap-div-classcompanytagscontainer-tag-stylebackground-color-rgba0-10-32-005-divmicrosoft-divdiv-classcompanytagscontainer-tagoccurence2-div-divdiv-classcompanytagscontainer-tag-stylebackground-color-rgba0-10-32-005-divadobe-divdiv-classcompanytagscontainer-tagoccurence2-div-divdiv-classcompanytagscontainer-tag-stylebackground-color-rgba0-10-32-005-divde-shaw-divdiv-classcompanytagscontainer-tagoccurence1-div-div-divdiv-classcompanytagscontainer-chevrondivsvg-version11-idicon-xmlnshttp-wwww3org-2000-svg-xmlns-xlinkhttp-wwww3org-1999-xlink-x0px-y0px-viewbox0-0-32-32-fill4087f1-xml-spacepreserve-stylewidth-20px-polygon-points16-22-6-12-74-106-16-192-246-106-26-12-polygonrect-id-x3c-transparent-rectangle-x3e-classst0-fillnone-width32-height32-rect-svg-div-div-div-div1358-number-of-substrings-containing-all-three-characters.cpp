class Solution {
public:
    int numberOfSubstrings(string s) {
        int l = 0 , r = 0 ;
        //two pointers 'l' and 'r' respectively

        map<char,int>mp;
        //map 

        int len = s.size() - 1;

        int cnt = 0; //to store answer

        while(r!=s.size()) //while 'r' reaches the last index
        {
            mp[s[r]]+=1; //count frequency of each character for each 'r' index

            while(mp['a'] and mp['b'] and mp['c']) // when an index 'l' and 'r' has come such that 'a','b','c' all 3 exists in map
            {
                cnt+=1 + (len-r); // count all substrings that can be formed till 'r'

                mp[s[l]]-=1; //shrink window size by reducing the frequency of 'lth' character

                l++; //increment 'l' to go to next window
            }
            r++; //increment 'r' 
        }

        return cnt;
    }
};