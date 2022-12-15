#include <bits/stdc++.h> 
using namespace std;
//what is circular queue is a queue where the last element is connected to the first element to make a circle. It is also called "Ring Buffer".
//it is useful for streaming data. For example, a circular queue of size 5 is used for streaming data. The buffer is initially empty and when the next element is inserted, the oldest element in the queue is overwritten.
//example: 1,2,3,4,5
//insert 6, so 2,3,4,5,6
//insert 7, so 3,4,5,6,7 
class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        arr.resize(k);
        front = -1;
        rear = -1;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        if(isEmpty()) front = 0;
        rear = (rear + 1) % arr.size();
        arr[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        if(front == rear) {
            front = -1;
            rear = -1;
            return true;
        }
        front = (front + 1) % arr.size();
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return ((rear + 1) % arr.size()) == front;
    }
};
int binarySearch(int x){
    int l = 0, r = 9;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(x == mid) return mid;
        else if(x < mid) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
int main() {
    
} 