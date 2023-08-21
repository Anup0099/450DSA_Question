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
    void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val<<",";
        temp = temp->next;
    }
    cout << "\n";
}
    void reorderList(ListNode* head) {
        vector<int> copy;
    vector<int> copy2;

    ListNode *temp = head;
    while (temp != NULL)
    {
        copy.push_back(temp->val);
        temp = temp->next;
    }
    int n = copy.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        copy2.push_back(copy[i]);
        copy2.push_back(copy[j]);
        i++;
        j--;
    }
    if (i == j)
    {
        copy2.push_back(copy[i]);
    }
    temp = head;
    for (int i = 0; i < n; i++)
    {
        temp->val = copy2[i];
        temp = temp->next;
    }

    print(head);
    }
};