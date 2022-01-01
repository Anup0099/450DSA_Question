#include <iostream>
using namespace std;
class List;
class Node
{
    int data;
    Node *next;

public:
    Node(int d)
    {
        data = d;
        next = NULL;
    }

    friend class List;
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int data)
    {
        if (head == NULL)
        {
            Node *new_node = new Node(data);
            head = new_node;
            tail = new_node;
        }
        else
        {
            Node *new_node = new Node(data);
            new_node->next = head;
            head = new_node;
        }
    }

    void push_back(int data)
    {
        if (head == NULL)
        {
            Node *new_node = new Node(data);
            head = new_node;
            tail = new_node;
        }
        else
        {
            Node *new_node = new Node(data);
            tail->next = new_node;
            tail = new_node;
        }
    }
};
int main()
{
    List l1;
    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(30);
    l1.push_back(30);
}