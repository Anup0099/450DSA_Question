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
    ListNode *detectCycle(ListNode *root) {
    set<ListNode *> s;
    while (root != NULL)
    {
        if (s.find(root) != s.end())
        {
            return root;
        }
        s.insert(root);
        root = root->next;
    }
    return NULL;
    }
};