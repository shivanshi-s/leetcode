class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int total = original.size();
        if(total != m*n){
            return {};
        }
        
        vector<vector<int>> result(m, vector<int>(n)); 
        
        int k = 0; // for iterating on the 1D array
        
        for(int i = 0 ; i < m ; i++){
            for( int j = 0; j < n ; j++){
                result[i][j] = original[k++];
            }
        }
        return result;
    }
};