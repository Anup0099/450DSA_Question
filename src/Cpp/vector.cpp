#include <bits/stdc++.h>
using namespace std;

class LinkedList
{
public:
    LinkedList *next;
    int data;
    LinkedList(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAthead(LinkedList *&head, int data)
{
    LinkedList *temp = new LinkedList(data);
    temp->next = head;
    head = temp;
}
void print(LinkedList *&head)
{
    LinkedList *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
bool detectCapitalUse(string word)
{
   
    for (int i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
        {
            return true;
        }
    }
        if (word.length() == isupper(word[0]))
        {
            return true;
        }
        for (int j = 0; j< word.length(); j++)
        {
            /* code */
            if (islower(word[j]))
            {
                return true;
            }
            
        }
         for(int i = 2; i < word.length(); i++){
                if(islower(word[i])) return false;
            }
        return false;
}
int main()
{
    cout<<detectCapitalUse("USA");
}