#include <bits/stdc++.h>
using namespace std;
// class stack{
//     int *arr;
//     int max_size;
//     int top;
//     public:
//     stack(int size=10){
//         arr-new int (size);
//         max_size = size;
//         top=-1;
//     }
//     bool empty(){
//         return top==-1;
//     }
//     bool full(){
//         return (top+1)==max_size;

//     }
//     void push(int data){
//         if(full){
//            cout<<"satck fulll"<<'\n';
//            return ;
//         }else{
//             top++;
//             arr[top]=data;
//         }
//     }
//     void pop(){
//         if(empty()){
//             cout<<"underflow";
//             return;
//         }else{
//             top--;
//         }

//     }
//     int top(){
//         if(empty()){
//             return -1;
//         }
//         else{
//             return arr[top];
//         }
//     }

// }
void brackets()
{
    string s;
    cin >> s;
    int i = 0, count = 0;
    while (i < s.length())
    {
        if (s[i] == '(')
        {
            count++;
        }
        else if (s[i] == ')')
            count--;

        if (count < 0)
        {
            cout << "inivalid sequence";
            return;
        }
    }
    if (count == 0)
    {
        cout << "valid sequence";
    }
    else
    {
        cout << "invalid sequence";
    }
    return;
}
void balancing()
{
    string s;
    cin >> s;
    stack<int> st;
    int i = 0;
    while (i < s.length())
    {
        /* code */
        if (s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i]=='<')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                cout << "invalid sequence";
                return;
            }
            else if ((st.top() == '(' && s[i] == ')') ||
                     (st.top() == '{' && s[i] == '}') ||
                     (st.top() == '[' && s[i] == ']') ||
                     (st.top() == '<' && s[i] == '>')

            ){
                st.pop();
            }
        }
        i++;
    }
    if(st.empty()){
        cout<<"valid seqwuence";
    }else{
        cout<<"invalid sequence";
    }
}
int subtractProductAndSum(int n) {

     long product = 1;
    int sum =0;
        while(n!=0){
            int digit=  n % 10;
           product =( product * digit);
            sum = sum+digit;
            
            int div = n/10;
        }
        int answer = product-sum;
        return answer;
    }





    
int main()
{
   cout<<subtractProductAndSum(56);
}
