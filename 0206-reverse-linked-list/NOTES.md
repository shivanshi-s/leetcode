iterative approach.  tO(n) sc : O1
Recursive approach would be:
reverse(head){
1. ek case solve karna hai
2. base case : if head == null || head->next == null return head;
3.  reverse func will give reverselist of head
4.  reverse the choti linked list and fir 2 kaam rhte hai
5.  node* chotaHead = reverse(head->next)
head->next-> next = head;
head->next = NULL;
return chotaHead;