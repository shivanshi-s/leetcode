class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>ans;
        
        for(int i = 0; i < tokens.size(); i++){
            // we know there are only 4 valid operators + - * /

            // if '+' , add top two elements of stack
            if(tokens[i] == "+"){
                int x = ans.top();
                ans.pop();
                int y = ans.top();
                ans.pop();
                ans.push(x+y);
            }
            // if '-' , subtract top two elements of stack
            else if(tokens[i] == "-"){
                int x = ans.top();
                ans.pop();
                int y = ans.top();
                ans.pop();
                ans.push(y - x);
            }
            
            else if(tokens[i] == "*"){
                int x = ans.top();
                ans.pop();
                int y = ans.top();
                ans.pop();
                ans.push(x * y);                
            }
            
            else if(tokens[i] == "/"){
                int x = ans.top();
                ans.pop();
                int y = ans.top();
                ans.pop();
                ans.push(y / x);                
            }
        // if tokens[i] is a character push into the stack
            else
                ans.push(stoi(tokens[i]));
        }
        return ans.top();
    }
};