package string;

import java.util.Arrays;
import java.util.List;

public class ReaverseString {
    public static void main(String[] args) {


    }
    static void rever(char[] s) {
        int right = s.length-1;
        int left =0;
        while(left < right){
            char c = s[left];
            s[left] = s[right];
            s[right] = c;

            left++;
            right--;
        }

    }
}
