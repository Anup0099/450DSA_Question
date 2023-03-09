/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
          if(!head || !(head->next))
            return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                break;
        }
        
        if(fast != slow)
            return NULL;
        
        ListNode* entry = head;
        while(entry != slow) {
            entry = entry->next;
            slow  = slow->next;
        }
        return entry;
    }
};