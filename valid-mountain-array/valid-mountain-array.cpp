class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        int n = a.size();
          int i = 0;
          
//      looping through to see if the arr is increasing or decreasing
        
        while( i < n && i+1 < n && a[i] < a[i+1])
        {
            i++;
        }
//         edge cases : only increasing or never increasing
        if (i == 0 || i+1 >= n) //end of arr i+1 and has always been increasing
            return false;
        
//         entirely decreasing check
        while ( i < n && i+1 < n)
        {
            if (a[i] <= a[i+1])
                return false;
                i++;
        }
        return true;
    }
};