//the idea is to first find the xor of every element..the final xor will represent the xor of two non repeating elements e.g 1 2 1 3 2 5 final xor will be 1 1 0 . Now 1 1 0 is the xor of 3 and 5 and also of every element as well. Now if we look into the right most 1
// 1 1 0
//   ^
// this 1 represents that the two non repeating elements have either 0 or 1 at that position ..both of them cant have the same value at that point.
//So if we find the right set bit mask of 1 1 0  i.e --> 0 1 0
// Now if we xor all the elements whose 2nd bit from right is 1 we will get the one non repeating number i.e 2^2^3=3
//Simillarly if we xor all the elements with that bit as 0 we will get 1^1^5=5
//so we have 3 and 5 as answers