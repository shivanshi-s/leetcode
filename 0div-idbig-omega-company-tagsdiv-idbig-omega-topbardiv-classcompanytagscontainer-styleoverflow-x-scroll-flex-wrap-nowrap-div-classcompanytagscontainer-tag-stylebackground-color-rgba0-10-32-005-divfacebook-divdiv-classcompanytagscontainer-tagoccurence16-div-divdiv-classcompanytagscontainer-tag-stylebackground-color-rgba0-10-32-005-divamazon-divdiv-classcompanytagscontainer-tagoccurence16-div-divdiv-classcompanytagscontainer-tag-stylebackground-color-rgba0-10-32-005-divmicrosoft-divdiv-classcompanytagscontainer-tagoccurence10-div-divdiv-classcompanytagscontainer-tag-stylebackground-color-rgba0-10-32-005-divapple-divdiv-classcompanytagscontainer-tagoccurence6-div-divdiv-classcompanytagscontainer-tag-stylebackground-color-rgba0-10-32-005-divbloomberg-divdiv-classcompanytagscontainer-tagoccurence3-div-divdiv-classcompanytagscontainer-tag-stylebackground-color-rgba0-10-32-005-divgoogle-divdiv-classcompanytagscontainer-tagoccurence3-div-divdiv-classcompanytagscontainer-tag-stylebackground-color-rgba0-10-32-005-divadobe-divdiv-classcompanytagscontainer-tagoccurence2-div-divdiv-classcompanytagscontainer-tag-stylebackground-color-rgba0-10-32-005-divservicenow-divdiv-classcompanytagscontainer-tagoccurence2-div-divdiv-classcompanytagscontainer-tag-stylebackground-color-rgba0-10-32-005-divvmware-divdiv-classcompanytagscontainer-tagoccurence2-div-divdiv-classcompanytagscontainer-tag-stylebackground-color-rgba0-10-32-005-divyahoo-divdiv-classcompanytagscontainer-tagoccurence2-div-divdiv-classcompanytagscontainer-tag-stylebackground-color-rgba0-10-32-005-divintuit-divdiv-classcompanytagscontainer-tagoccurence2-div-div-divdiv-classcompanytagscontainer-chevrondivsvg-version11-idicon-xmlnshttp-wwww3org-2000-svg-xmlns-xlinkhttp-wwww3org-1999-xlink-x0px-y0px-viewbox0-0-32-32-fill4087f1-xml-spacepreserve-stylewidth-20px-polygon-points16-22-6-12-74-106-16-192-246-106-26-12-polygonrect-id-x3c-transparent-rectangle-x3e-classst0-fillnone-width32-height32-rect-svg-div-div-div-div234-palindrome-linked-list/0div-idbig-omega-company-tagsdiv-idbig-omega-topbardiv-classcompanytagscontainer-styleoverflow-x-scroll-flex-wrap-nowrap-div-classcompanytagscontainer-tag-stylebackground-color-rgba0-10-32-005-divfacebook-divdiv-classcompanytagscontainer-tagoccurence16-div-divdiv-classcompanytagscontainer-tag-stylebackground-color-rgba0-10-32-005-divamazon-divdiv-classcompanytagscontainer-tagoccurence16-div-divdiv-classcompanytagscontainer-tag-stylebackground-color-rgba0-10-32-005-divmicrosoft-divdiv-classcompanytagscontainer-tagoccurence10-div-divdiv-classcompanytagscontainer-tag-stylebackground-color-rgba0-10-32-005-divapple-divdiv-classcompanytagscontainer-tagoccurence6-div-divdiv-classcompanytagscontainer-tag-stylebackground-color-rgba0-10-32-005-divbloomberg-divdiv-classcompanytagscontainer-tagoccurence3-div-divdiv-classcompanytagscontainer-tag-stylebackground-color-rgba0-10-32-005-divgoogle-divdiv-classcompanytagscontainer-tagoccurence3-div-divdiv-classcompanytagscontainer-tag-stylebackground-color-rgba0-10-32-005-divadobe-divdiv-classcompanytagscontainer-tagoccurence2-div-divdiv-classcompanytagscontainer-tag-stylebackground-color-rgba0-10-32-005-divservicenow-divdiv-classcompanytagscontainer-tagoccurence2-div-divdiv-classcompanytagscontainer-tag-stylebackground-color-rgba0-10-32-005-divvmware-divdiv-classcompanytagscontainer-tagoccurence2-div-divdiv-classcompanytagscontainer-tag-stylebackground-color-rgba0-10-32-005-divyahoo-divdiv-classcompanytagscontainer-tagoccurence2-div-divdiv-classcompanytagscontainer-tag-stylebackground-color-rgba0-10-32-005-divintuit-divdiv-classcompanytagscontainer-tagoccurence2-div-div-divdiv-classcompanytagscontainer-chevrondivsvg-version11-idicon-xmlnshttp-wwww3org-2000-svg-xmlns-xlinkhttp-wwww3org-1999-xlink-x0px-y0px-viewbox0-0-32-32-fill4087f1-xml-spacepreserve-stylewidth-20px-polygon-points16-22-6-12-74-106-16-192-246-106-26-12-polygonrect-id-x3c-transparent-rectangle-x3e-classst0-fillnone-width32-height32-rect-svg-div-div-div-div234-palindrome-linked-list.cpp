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
    bool isPalindrome(ListNode* head) {
        // find middle and reverse the ll and compare with 2 pointer
        
        if ( head == NULL || head->next == NULL) return true;
        
       // Optimal Solution - T = O(n/2 + n/2 + n/2) ~ O(n), S = O(1)
	ListNode* slow = head;
	ListNode* fast = head;
	
	// Finding the middle node
	while(fast->next && fast->next->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	
	// Reversing the right half
	ListNode* prev = nullptr;
	ListNode* curr = slow->next;
	ListNode* seql = slow->next;
	
	while(curr)
	{
		seql = seql->next;
		curr->next = prev;
		prev = curr;
		curr = seql;
	}
	
	slow->next = prev;
	slow = head;
	
	// Checking for palindrome
	while(prev)
	{
		if(slow->val != prev->val) return false;
		slow = slow->next;
		prev = prev->next;
	}
	
	return true;
    }
};