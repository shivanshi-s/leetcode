class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head) return NULL;
        
        // Check if there are enough k nodes to reverse
        ListNode* check = head;
        int count = 0;
        while (check && count < k) {
            check = check->next;
            count++;
        }

        // If there are k nodes, then reverse them
        if (count == k) {
            ListNode* next = NULL;
            ListNode* prev = NULL;
            ListNode* curr = head;

            int count = 0;
            while (curr && count < k) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }

            // Connect the reversed nodes to the next group, only if there are k nodes
            if (next) head->next = reverseKGroup(next, k);
            return prev;
        }

        // Otherwise, return the head as it is
        return head;
    }
};
