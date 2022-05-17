class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size(); //size of the array
        stack<int> s; //declaring a stack
//         loop for checking the stack
        int i = 0 ; // pointer for the popped 
        for( int j = 0 ; j < n; j++ )
        {
            s.push(pushed[j]); //push current element onto the stack
             // now see whether they required this element to pop, if yes,
            // then pop and move pointer in our popped array 
            // while the element matches with the top of the stack
            while(!s.empty() && s.top() == popped[i])
            {
                s.pop();
                i++;
            }
        }
        // if stack is empty, then return true otherwise false
        return s.empty();
    }
};