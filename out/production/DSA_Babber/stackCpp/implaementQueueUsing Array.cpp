#include <bits/stdc++.h> 
using namespace std; 
///fifo
//first in first out 
//insert at the rear index of array
class Queue{
    int *array;
    int start,end,curSize,maxSize;
    public:
    Queue(int size){
        // maxSize=size;
        curSize=0;
        start=-1;
        end=-1;
        array=new int[size];
    }
    Queue(int maxSize){
        this->maxSize=maxSize;
        curSize=0;
        start=-1;
        end=-1;
        array=new int[maxSize];
    }
    void push(int x){
        if(curSize==maxSize){
            cout<<"Queue is full"<<endl;
            exit(1);
         
        }
        if(end==-1){
            start=0;
            end=0;
        }
        else{
            end=(end+1)%maxSize;
            array[end]=x;
            cout<<"the element is inserted "<<endl;
            curSize++;
        }
    }
    int pop(){
        if(start==-1){
            cout<<"Queue is empty"<<endl;

        }
        int popped=array[start];
        if(curSize==1){
            start=-1;
            end=-1;
        }
        else{
            start=(start+1)%maxSize;
            curSize--;
        }
        return popped;
    }
    int top(){
        if(start=-1){
            cout<<"Queueis empty"<<endl;
            exit(1);
        }
        return array[start];
    }
    int size(){
        return curSize;
    }
};


int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<"the peek of the queue before deleting any element"<<q.top()<<endl;
    cout<<"the size of the queue before deletion"<<q.size()<<endl;
    cout<<"the first element to be deleted"<<q.pop()<<endl;
    cout<<"the peek of the queue after deletion"<<q.top()<<endl;
    cout<<"the size of the queue after deletion"<<q.size()<<endl;
    return 0;
}