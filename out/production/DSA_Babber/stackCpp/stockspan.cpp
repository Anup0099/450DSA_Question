#include <bits/stdc++.h>
using namespace std;

void printGreater(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int j;
        for (int j = i - 1; j > 0; j--)
        {
            if (arr[i] > arr[j])
            {
                cout << arr[j];
                break;
            }
        }
        if (j == -1)
        {
            cout << -1 << " ";
        }
    }
}
void print(int arr[],int n){
    stack<int>s;
    s.push(arr[0]);
    for (int i = 0; i < n; i++)
    {
        while( s.empty()==false && s.top() <=arr[i]){
            s.pop();
        }
        int pg =s.empty()?-1:s.top();
        cout<<pg<<endl;
        s.push(arr[i]);
    }
}
int main()
{

}