#include <bits/stdc++.h> 
using namespace std;
// On an 8×8 grid, some horizontal rows have been painted red, and some vertical columns have been painted blue, in some order. The stripes are drawn sequentially, one after the other. When the stripe is drawn, it repaints all the cells through which it passes.

// Determine which color was used last.

// The red stripe was painted after the blue one, so the answer is R.
// Input
// The first line of the input contains a single integer t (1≤t≤4000) — the number of test cases. The description of test cases follows. There is an empty line before each test case.

// Each test case consists of 8 lines, each containing 8 characters. Each of these characters is either 'R', 'B', or '.', denoting a red square, a blue square, and an unpainted square, respectively.

// It is guaranteed that the given field is obtained from a colorless one by drawing horizontal red rows and vertical blue columns.

// At least one stripe is painted.

// Output
// For each test case, output 'R' if a red stripe was painted last, and 'B' if a blue stripe was painted last (without quotes). 
int main() {
    int t;cin>>t;
    while(t--){
        char arr[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>arr[i][j];
            }
        }
        int flag=0;
        for(int i=0;i<8;i++){
        int count=0;
            for(int j=0;j<8;j++){
                if(arr[i][j]=='R'){
                   
                    count++;
                   
                }
               
            }
            if(count==8){
                flag=1;
                break;
            }
            
        }
        if(flag==1){
            cout<<"R"<<endl;
        }else{
            cout<<"B"<<endl;
        }
       
    }
} 