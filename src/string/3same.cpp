#include <bits/stdc++.h>
using namespace std;

 string largestGoodInteger(string num) {
        if(num.length()<3){
            cout<<"";
        }
        string a ="";
        string b ="";
        string c ="";
        for(int i=0;i<num.length();i++){
            if(num.at(i)==num.at(i+1)==num.at(i+2)){

              a= num.at(i);
              b= num.at(i+1);
              c= num.at(i+2);

            }
        }
        a.append(b);
        a.append(c);
        return a;
        
    }