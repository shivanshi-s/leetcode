class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> sorted;
//         copying heights into sorted array
        sorted = heights;
        // sort the array
        sort(sorted.begin(), sorted.end());
        
//         search and compare
        int count = 0; 
        
        for(int i = 0 ; i < n ; i++)
        {
            if(sorted[i] != heights[i])
                count++;
        }
          return count;
    }
  
};