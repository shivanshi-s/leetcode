class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size(); //size of the array
        stack<int> s; //declaring a stack
//         loop for checking the stack
        int i = 0 ;
        for( int j = 0 ; j < n; j++ )
        {
            s.push(pushed[j]);
            while(!s.empty() && s.top() == popped[i])
            {
                s.pop();
                i++;
            }
        }
        return s.empty();
    }
};