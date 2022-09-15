#include <bits/stdc++.h>
using namespace std;
// naive solution for this problem
int search2(int arr[], int x)
{
    int i = 0;
    while (true)
    {
        if (arr[i] == x)
        {
            return i;
        }
        else
        {
            if (arr[i] > x)
            {
                return -1;
            }
        }
        i++;
    }
}
int binarySearch1(int arr[],int x){
    if(arr[0] == x){
        return 0;
    }
    int i=1;
    while(arr[i]<x){
        i=i*2;
    }
    if(arr[i]==x)return i;
    return binary_search(arr[x],i/2+1,i-1);
}
int main() {

}