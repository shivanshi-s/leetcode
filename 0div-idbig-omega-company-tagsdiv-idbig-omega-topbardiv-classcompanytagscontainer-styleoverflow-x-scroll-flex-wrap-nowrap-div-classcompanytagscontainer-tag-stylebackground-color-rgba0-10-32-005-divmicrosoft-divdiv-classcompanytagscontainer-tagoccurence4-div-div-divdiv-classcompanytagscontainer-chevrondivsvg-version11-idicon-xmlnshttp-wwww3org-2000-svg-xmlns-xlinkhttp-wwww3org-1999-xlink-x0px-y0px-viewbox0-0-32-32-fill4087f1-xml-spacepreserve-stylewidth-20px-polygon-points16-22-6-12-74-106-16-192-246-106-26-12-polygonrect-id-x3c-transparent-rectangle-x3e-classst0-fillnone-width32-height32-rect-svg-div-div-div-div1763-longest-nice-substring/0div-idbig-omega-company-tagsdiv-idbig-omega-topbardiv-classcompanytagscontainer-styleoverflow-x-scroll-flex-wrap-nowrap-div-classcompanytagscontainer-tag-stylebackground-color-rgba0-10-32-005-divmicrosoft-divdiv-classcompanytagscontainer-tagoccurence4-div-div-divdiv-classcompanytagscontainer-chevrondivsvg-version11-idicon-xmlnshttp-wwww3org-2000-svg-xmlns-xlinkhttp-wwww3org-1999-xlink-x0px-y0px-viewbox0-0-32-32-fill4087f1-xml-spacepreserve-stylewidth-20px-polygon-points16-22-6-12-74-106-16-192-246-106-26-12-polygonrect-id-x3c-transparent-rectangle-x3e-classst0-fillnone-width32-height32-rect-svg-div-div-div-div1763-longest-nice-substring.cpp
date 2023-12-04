class Solution {
public:
    string longestNiceSubstring(string s) {
         if(s.length()<2)return "";
        
        unordered_set<char>set(s.begin(), s.end()); // store all the characters of string s
        
        for(int i=0; i<s.length(); ++i){
            // if corresponding upper or lower character not present we know it will
            // never be present in our answer substring
            if(set.find(toupper(s[i]))==set.end() || set.find(tolower(s[i]))==set.end()){
			   //Divide and Conquer step :
                string s1 = longestNiceSubstring(s.substr(0, i));
                string s2 = longestNiceSubstring(s.substr(i+1));
                return s1.size() >= s2.size() ? s1 : s2;
            }
        }
        
        return s; // whole string is the answer
    }
};