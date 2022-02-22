#include <bits/stdc++.h>
using namespace std;

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
    ListNode *mergeNodes(ListNode *head)

    {
        ListNode* head1=NULL;
        ListNode* head2=NULL;
        ListNode* temp=head->next;
        int sum=0;
        while(temp!=NULL){
            if(temp->val==0){
                temp->val=sum;
                sum=0;
                if(head1==NULL){
                    head1 = head2=temp;
                }else
                {
                     head2->next=temp;
                     head2=temp;
                                    
                }
                
            }else{
                sum= sum+temp->val;
            }
            temp= temp->next;
        }
        return head1;
    }
};