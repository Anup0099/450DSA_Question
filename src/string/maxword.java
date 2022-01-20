package string;

import java.util.Arrays;
import java.util.Collections;

public class maxword {
    public int mostWordsFound(String[] sentences) {
        int max = 0;
        for (int i = 0; i < sentences.length; i++) {
            String[] word = sentences[i].split(" ");
            if (word.length > max) {
                max = word.length;
            }
        }
        return max;

    }


    static String conRevstr(String S1,
                            String S2) {
        // code here
        StringBuilder sb = new StringBuilder();
        sb.append(S1);
        sb.append(S2);
        sb.reverse();
        return sb.toString();


    }

    static boolean isPalindrome(String str) {
        int i = 0;
        int j = str.length() - 1;
        while (i <= j) {
            char c = str.charAt(i);
            char c2 = str.charAt(j);
            if (c != c2) {
                return false;
            } else {
                i++;
                j--;
            }


        }
        return true;
    }

    static void solution(String str) {
        for (int i = 0; i < str.length(); i++) {
            for (int j = i + 1; j < str.length(); j++) {
                String s = str.substring(i, j);
                if (isPalindrome(s) == true) {
                    System.out.println(s);
                }
            }
        }
    }

    static int sol(int N,
                   String s) {
        N = s.length();
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'R') {
                c1++;
            } else {
                c2++;
            }
        }
        if (c1 > c2) {
            return c2;
        } else {
            return c1;
        }
    }

    //     static long findSum(String str) {
//         // your code here\
//         int sum = 0;
//         int ans = 0;
//         StringBuffer num = new StringBuffer();
//         for (int i = 0; i < str.length(); i++) {
//             if (Character.isDigit(str.charAt(i))) {
//                 num.append(str.charAt(i));
//             }
//
//             String answer = num.toString();
//                ans = Integer.parseInt(answer);
//
//
//         }
//         for (int i = 0; i <ans ; i++) {
//             sum += ans;
//         }
//         return sum;
//     }
    static int length(int arr[],
                      int n) {
        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
        int count = 0;
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] != arr[i + 1]) {
                return 0;
            } else {
                count +=arr[i];
            }
        }
        return count;
    }

    public static void main(String[] args) {

        int arr[] = {1, 5,2, 3, 4};

        System.out.println(length(arr, 4));
    }


}

