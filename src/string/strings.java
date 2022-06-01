package string;

import java.util.ArrayList;
import java.util.List;

public class strings {
    static  void reverse(char s[],int start,int end){
        while (start<end)
        {
            char temp = s[start];
            s[start]= s[end];
            s[end]= temp;
            start++;
            end--;
        }


    }
   static String reverseWords(String S)
    {
        // code here
       char[]c = S.toCharArray();
       int n = S.length();
       int start=0;
        for (int i = 0; i < n; i++) {
            if (c[i]=='.'){
                reverse(c,start,i-1);
                start = i+1;
            }
        }
        reverse(c,start,n-1);
        reverse(c,0,n-1);
        String ss = new String(c);
        return  ss;



    }
    public static void main(String[] args) {

    }
}
