#include <bits/stdc++.h>
using namespace std;
// You are given a string of length 5 called time, representing the current time on a digital clock in the format "hh:mm". The earliest possible time is "00:00" and the latest possible time is "23:59".

// In the string time, the digits represented by the ? symbol are unknown, and must be replaced with a digit from 0 to 9.

// Return an integer answer, the number of valid clock times that can be created by replacing every ? with a digit from 0 to 9.
int countTime(string time)
{
    for (int i = 0; i < time.length(); i++){
        if(time[i]=='?'){
            if(i==0){
                if(time[i+1]=='?'){
                    time[i]='2';
                }
                else if(time[i+1]>'3'){
                    time[i]='1';
                }
                else{
                    time[i]='2';
                }
            }
            else if(i==1){
                if(time[i-1]=='2'){
                    time[i]='3';
                }
                else{
                    time[i]='9';
                }
            }
            else if(i==3){
                time[i]='5';
            }
            else{
                time[i]='9';
            }
        }


    }
    int ans = 0;
    int count = 0;
    for (int i = 0; i < time.length(); i++)
    {
        if(time[i]!=':'){
            count++;
        }
        else{
            ans = ans*10 + (time[i]-'0');
            count = 0;
        }
    }
    ans = ans*10 + (time[time.length()-1]-'0');
    return count;

}

int main() {}