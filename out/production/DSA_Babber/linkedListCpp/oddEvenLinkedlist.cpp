#include <bits/stdc++.h>
using namespace std;
ListNode *oddEvenList(ListNode *head)
{
    if (!head)
        return head;
    ListNode *odd = head, *even = head->next, *evenHead = even;
    while (even && even->next)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}
int main() {}