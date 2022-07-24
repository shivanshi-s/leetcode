class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int count = 0;
        int count2 = 0;
        int i ;
        int n = ranks.size();
        int m = suits.size();
        
        for (i = 1; i < m ; i++)
        if(suits[i] == suits[0]){
            count++;
        }
        if(count == 4)
            return "Flush";
        
    sort(ranks.begin(),ranks.end());
    for(i=0;i<ranks.size()-1;i++)
        if(ranks[i]==ranks[i+1])
        if(ranks[i]==ranks[i+2] && i<ranks.size()-2)
                return "Three of a Kind";
        
        for ( i = 0 ; i < n-1 ; i++) {
            if(ranks[i] == ranks[i+1])
                return "Pair";
        }
        return "High Card";
    }
};