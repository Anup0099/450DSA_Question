#include <bits/stdc++.h>
using namespace std;


// We are playing the Guess Game. The game is as follows:

// I pick a number from 1 to n. You have to guess which number I picked.

// Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

// You call a pre-defined API int guess(int num), which returns three possible results:

// -1: Your guess is higher than the number I picked (i.e. num > pick).
// 1: Your guess is lower than the number I picked (i.e. num < pick).
// 0: your guess is equal to the number I picked (i.e. num == pick).
// Return the number that I picked.
int guess(int val){
    int pn=0;
   if(val==pn){
      return  0;
   }else if(val<pn){
      return 1;
   }else{
      return 1;
   }
}
 int guessNumber(int n) {
        int lo =1;
        int high =n;
        while(lo<=high){
           int mid =lo+(high-lo)/2;
           if(guess(mid)==0){
              return mid;
           }else if(guess(mid)==-1){
              high = mid-1;
           }else if(guess(mid)==1){
              high = mid+1;
           }
        }
        return 0;
    }


int main(){

}