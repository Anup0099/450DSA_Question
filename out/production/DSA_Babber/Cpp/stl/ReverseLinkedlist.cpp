#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         ListNode* temp = head;
//         int size = 0;
//         while(temp != NULL) {
//             size++;
//             temp = temp->next;
//         }
//         if(size == 0) {
//             return head;
//         }
//         k = k % size;

//     }
// };
// void sayDigit(int n, string arr[])
// {
//     //base case
//     if (n == 0)
//     {
//         arr[0] = "";
//         return;
//     }
//     //recursive case
//     int digits = n % 10;
//     sayDigit(n / 10, arr);
//     cout << arr[digits] << endl;
// }
// bool linear(int &arr, int size, int k)
// {
//     if (size == 0)
//     {
//         return false;
//     }
//     if (arr[0] == k)
//     {
//         return true;
//     }
//     else
//     {
//         bool remain = linear(arr + 1, size - 1, k);
//         return remain;
//     }
// }
// // int* twosum(int *nums,int k){
// //     int size = sizeof(nums)/sizeof(nums[0]);
// //     int *arr1 = new int[2];
// //     for(int i=0;i<size;i++){
// //         for(int j=i+1;j<size;j++){
// //             if(nums[i]+nums[j]==k){
// //                 arr1[0]=i;
// //                 arr1[1]=j;
// //                 return arr1;
// //             }
// //         }
// //     }

// // }
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     vector<int> arr;
//     int size = nums.size();
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 arr.push_back(i);
//                 arr.push_back(j);
//                 return arr;
//             }
//         }
//     }
// }
  string reverseStr(string s, int k) {
   
   
   for (int i = 0; i < s.size(); i = i + 2*k) 
            reverse(s.begin()+i, min(s.begin()+i+k, s.end()));
        return s;
   
   
   }
void revese(char name[],int n){
    if(n==0){
        return;
    }
    revese(name+1,n-1);
    cout<<name[n-1];
}
//check if a string is palindrome
void tolower(char name[],int n){
    if(n==0){
        return;
    }
    if(name[n-1]>='A'&&name[n-1]<='Z'){
        name[n-1] = name[n-1] + 32;
    }
    tolower(name,n-1);
}
void toupper(char name[],int n){
    if(n==0){
        return;
    }
    if(name[n-1]>='a'&&name[n-1]<='z'){
        name[n-1] = name[n-1] - 32;
    }
    toupper(name,n-1);
}
bool isPalindrome(char name[],int n){
    if(n==0){
        return true;
    }
    if(name[0]!=name[n-1]){
        return false;
    }
    return isPalindrome(name+1,n-2);

    // int s = 0;
    // int end = name[n-1];
    // while(s<end){
    //     if(name[s]!=name[end]){
    //         return false;
    //     }
    //     s++;n
    //     end--;
    // }
    // return 1;


}

//string tokeniziation




int main()
{
    // string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    // sayDigit(123,arr);

    // vector<int> arr = {2, 7, 11, 15};
    // twoSum(arr, 9);
    
    
char name[256];
cin>>name;
int n=strlen(name);
cout<<isPalindrome(name,n);

    return 0;
}