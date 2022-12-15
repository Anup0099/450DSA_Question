#include <bits/stdc++.h>
using namespace std;
// You are given the head of a linked list.

// Remove every node which has a node with a strictly greater value anywhere to the right side of it.

// Return the head of the modified linked list.

 
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNodes(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = nullptr;
        ListNode *next = nullptr;
        while (curr != nullptr)
        {
            next = curr->next;
            if (prev != nullptr && prev->val < curr->val)
            {
                prev->next = next;
            }
            else
            {
                prev = curr;
            }
            curr = next;
        }
        return head;
    }
}