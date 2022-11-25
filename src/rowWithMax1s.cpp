#include <bits/stdc++.h> 
using namespace std;
int rowWithMAx1s(vector<vector<int>>arr,int n,int m){
    int max_row_index=0;
    int j=m-1;
    for(int i=0;i<n;i++){
        while(j>=0 && arr[i][j]==1){
            j--;
            max_row_index=i;
        }
    }
    return max_row_index;
} 
int main() {
    
} 