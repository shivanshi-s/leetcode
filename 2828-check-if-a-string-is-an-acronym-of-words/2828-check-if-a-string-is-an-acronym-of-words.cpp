class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
         string p ;
        for(auto it : words){
            p.push_back(it[0]);
            
        }
        return (p == s);
    }
};