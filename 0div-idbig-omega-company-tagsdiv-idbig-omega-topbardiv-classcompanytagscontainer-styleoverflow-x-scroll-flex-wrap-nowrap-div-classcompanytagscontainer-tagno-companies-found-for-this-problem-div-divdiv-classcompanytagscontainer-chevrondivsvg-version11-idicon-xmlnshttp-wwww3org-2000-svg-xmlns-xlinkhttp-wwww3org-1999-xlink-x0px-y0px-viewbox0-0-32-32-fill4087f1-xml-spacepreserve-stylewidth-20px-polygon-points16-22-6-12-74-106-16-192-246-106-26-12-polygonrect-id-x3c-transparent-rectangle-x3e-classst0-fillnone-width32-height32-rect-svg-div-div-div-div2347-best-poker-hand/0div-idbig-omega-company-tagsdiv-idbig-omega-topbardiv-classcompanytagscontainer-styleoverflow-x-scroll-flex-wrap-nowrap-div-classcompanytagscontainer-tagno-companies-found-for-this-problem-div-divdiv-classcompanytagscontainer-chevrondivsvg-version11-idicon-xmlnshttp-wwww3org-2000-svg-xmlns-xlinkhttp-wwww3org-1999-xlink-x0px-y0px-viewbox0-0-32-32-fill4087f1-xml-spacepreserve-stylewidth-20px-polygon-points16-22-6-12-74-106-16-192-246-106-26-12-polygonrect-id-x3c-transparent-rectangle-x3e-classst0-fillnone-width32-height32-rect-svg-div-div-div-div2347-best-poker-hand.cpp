class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int> mp1;  // ranks
        unordered_map<int,int> mp2;  // suits
        for(auto i : ranks){
            mp1[i]++;
        }
        for(auto i : suits){
            mp2[i]++;
        }
        
        for(auto itr : mp2){
            if(itr.second == 5) return "Flush";
            else break;
        }
        for(auto itr : mp1){
            if(itr.second >= 3) return "Three of a Kind";
        }
        for(auto itr : mp1){
            if(itr.second >= 2) return "Pair";
        }
        return "High Card";
    }
};