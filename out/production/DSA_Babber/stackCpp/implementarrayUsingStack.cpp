#include <bits/stdc++.h> 
using namespace std; 

int arr[5];
int top=-1;
void push(int x){
    arr[++top]=x;
}
int pop(){
return arr[top--];
}
int topElemrnt(){
    return arr[top];
}
bool isEmpty(){
    return top==-1;
}
int size(){
    return top+1;
}
void printStack(){
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {


    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printStack();
    cout<<"poped element is "<<pop()<<endl;
    printStack();
    cout<<"top element is "<<topElemrnt()<<endl;
    cout<<"is stack empty "<<isEmpty()<<endl;
    cout<<"size of stack is "<<size()<<endl;
    return 0;

} 