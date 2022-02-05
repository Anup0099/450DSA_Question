

#include <bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head== NULL)return 0;
        map<ListNode*,bool>visited;
        ListNode* temp = head;
        while (temp!=NULL)
        {
            /* code */
            if(visited[temp]==true){
                return 1;

            }
            visited[temp]= true;
            temp= temp->next;
        }
        return false;
    }
};
void up(int **p){
    p=p+1;
    // *p=*p+1;
    // **p=**p+1;
    
}

int main(){
    int i =5;
    int* p=&i;
    int **p2=&p;
   

   cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    up(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl;




}