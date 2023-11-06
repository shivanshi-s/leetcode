Here we are solving the problem using Stack, as it follows last in first out LIFO.
There are 4possible cases:
if(ops[i] == "+") we have to store to 2 elements in 2 variables & push them including adding both and push them.
if(ops[i] == "C") we need to pop the last inserted element.
if(ops[i] == "D") next element will be double of last element, push that to stack.
Else there will be an integer, so push it directly to our stack
Add all the stack element to ans & return it.
Time complexity: O(n).