/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // edge case
        if ( !head || !head->next || k ==0 ) return head;
        
        //compute the length
        ListNode* curr = head;
        int cnt = 1;
        while(curr->next && ++cnt)
            curr = curr->next;
        
        // go till that node
        curr->next = head;
        k = k % cnt;
        k = cnt - k;
        while (k--)
            curr = curr->next;
        
        //make the node head and break connection
        head = curr->next;
        curr->next = NULL;
        
        return head;
    }
};