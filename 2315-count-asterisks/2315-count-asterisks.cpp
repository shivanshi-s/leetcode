class Solution {
public:
    int countAsterisks(string s) {
 
    int n = s.length();
    int count = 0;
    int counter = 0;
        
        for(int i = 0 ; i < n ; i++){
            if(s.at(i) == '|'){
                counter++;
            }
            if(s.at(i)=='*' && (counter%2 == 0)){
                count++;
            }
        }
        return count;
    }
};