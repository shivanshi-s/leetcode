class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size()-1;
//         max value is assigned the last element initially
        int max_val = arr[n] ;
// the last element is assigned -1
        arr[n] = -1;
        
        
       for (int i = n-1 ; i >= 0 ; i--)
       {
//         if max element is smaller than or equal to the current element, they are swaped
           if(max_val <= arr[i])
               swap(max_val,arr[i]);
           else{
//                else the current element gets the value of the maximum value
               arr[i] = max_val;
           }
       }
        return arr;
    }
};