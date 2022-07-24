#include <bits/stdc++.h>
using namespace std;


vector<int> merge(vector<int>&num1,vector<int>&num2){
    vector<int> res;
    int i=0,j=0;
    while(i<num1.size()&&j<num2.size()){
        if(num1[i]<num2[j]){
            res.push_back(num1[i]);
            i++;
        }
        else{
            res.push_back(num2[j]);
            j++;
        }
    }
    //when one array is finished, add the rest of the other array
    while(i<num1.size()){
        res.push_back(num1[i]);
        i++;
    }
    //when one array is finished, add the rest of the other array
    while(j<num2.size()){
        res.push_back(num2[j]);
        j++;
    }
    return res;
}

int main(){

}