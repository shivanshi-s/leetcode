1.Initialize variables to point at head(i) , tail(j) of the window array, ans, res to 0, where i and j represent the start and end of the current window, ans represents the maximum frequency of any character in the current window, and res represents the maximum length of the substring containing the same character seen so far.
​
2.Initialize an unordered map mp to keep track of the frequency of characters in the current window
​
3.Iterate over the string s using the variable i.
​
4.Increment the frequency of the character s[i] in the map mp.
​
5.Update the variable ans to the maximum frequency of any character seen so far.
​
6.If the number of characters in the current window that are different from the most frequent character (i-j+1-ans) is greater than k, slide the window to the right by decrementing the frequency of the leftmost character (s[j]) and incrementing j.
​
7.While sliding the window, update the maximum length of the substring containing the same character seen so far in the variable res.
​
8.After iterating over the entire string, return the variable res as the maximum length of the substring containing the same character.
​
Complexity
Time complexity:
The time complexity of the given code is O(n),
(Where n is the length of the input string s.)
​
Space complexity:
The space complexity of the code is O(n)