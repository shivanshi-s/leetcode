class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();  //no.of rows
        int m = matrix[0].size();  //no. of columns
        int startRow = 0;
        int endRow = n-1;
        int startCol = 0;
        int endCol = m-1;
        
         vector<int> ans;
        
        while(startCol <= endCol && startRow <= endRow){
            //traverse start row
            for(int col = startCol; col <=endCol; col++)
            {
                ans.push_back(matrix[startRow][col]);
            }
            for(int row = startRow+1; row<=endRow; row++)
            {
                ans.push_back(matrix[row][endCol]);
            }
            for(int col = endCol-1; col>=startCol; col--)
            {   if(startRow == endRow){break;}
                ans.push_back(matrix[endRow][col]);
            }
            for(int row = endRow-1; row >= startRow+1; row--)
            {   if(startCol == endCol){break;}
                ans.push_back(matrix[row][startCol]);
            }
            
            startRow++;
            endRow--;
            startCol++;
            endCol--;
        }
        return ans;
    }
};