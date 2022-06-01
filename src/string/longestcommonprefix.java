package string;

import java.util.Arrays;

public class longestcommonprefix {
    int longestCommonPrefix(String arr[],
                            int n) {
        int min = arr[0].length();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i].length() < min) {
                min = arr[i].length();
            }
        }
        return min;


    }

static void fun(int n){
        if(n==0){
            return;

        }
    System.out.println(n);
        fun(n-1);
    System.out.println(n);
}
    public static void main(String[] args) {

fun(5);

    }
}
