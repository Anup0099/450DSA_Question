#include <bits/stdc++.h>
using namespace std;

int  prints(int ind,vector<int>&ds,int s,int sum,int arr[],int  n)
{
    if(ind ==n){
        if(s==sum){
            return 1;
        }
       else return 0;
    }
    ds.push_back(arr[ind]);
}

int main(int argc, char){

}