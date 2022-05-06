// You are given the head of a linked list, and an integer k.

// Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    ListNode *next;
    int val;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {
        k=k-1;
        ListNode *firstN =head;
        while(k>0){
            firstN = firstN->next;
            k--;
        }
        ListNode *f = firstN;
        ListNode *second = head;
        while (f->next !=NULL)
        {
            second = second->next;
            f=f->next;
        }

        int temp = firstN->val;
        firstN->val = second->val;
        second->val = temp;
        return head;

        
    }
};

int main()
{
}