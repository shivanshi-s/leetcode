Two-Pointers Solution
Time Complexity : O(m + n)
Space Complexity : O(1)
​
We initialize two pointers, ptr1 and ptr2, at the heads of the two linked lists (headA and headB). We then start traversing both lists. If either pointer reaches the end of its list, we redirect it to the head of the other list. If the lists intersect, the pointers will meet at the intersection point after a certain number of iterations. If the lists do not intersect, the pointers will meet at the end of the lists (NULL), and the function will return NULL, indicating no intersection. This approach works because when the pointers switch lists, they effectively "catch up" with each other, ensuring they meet at the intersection point if one exists.