#include <bits/stdc++.h>
using namespace std;

// A complete working C++ program to delete
// a node in a linked list at a given position
class MyLinkedList {
public:
    MyLinkedList() {
		head = NULL;
		tail = NULL;
		size = 0;

        
    }
    
    int get(int index) {
		if(index < 0 || index >= size) {
			return -1;
		}
		Node* temp = head;
		for(int i = 0; i < index; i++) {
			temp = temp->next;
		}
		return temp->data;
    }
    
    void addAtHead(int val) {
		Node *temp = new Node(val);
		if(head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			temp->next = head;
			head = temp;
		}
    }
    
    void addAtTail(int val) {
        Node* temp = new Node(val);
		if(head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			tail->next = temp;
			tail = temp;
		}
	}
	
	void addAtIndex(int index, int val) {
		if(index < 0 || index > size) {
			return;
		}
		Node* temp = new Node(val);
		if(index == 0) {
			
		}
    }
    
    void addAtIndex(int index, int val) {
        
    }
    
    void deleteAtIndex(int index) {
        
    }
};