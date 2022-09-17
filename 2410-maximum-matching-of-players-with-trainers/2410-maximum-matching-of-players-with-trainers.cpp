class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n = players.size();
        int m = trainers.size();
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        
        int count = 0, i = 0, j =0;
        
        while(i < n &&  j < m){
            if(players[i] <= trainers[j])
            {
                count++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return count;
    }
};