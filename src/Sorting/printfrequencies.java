package Sorting;

import java.util.Arrays;

public class printfrequencies {
    public static void main(String[] args) {
        char ss= 'g';
        System.out.println((int)ss);
        String s = "geeksforgeeks";
        int []count= new int[26];
        for (int i = 0; i <s.length() ; i++) {
            count[s.charAt(i)-'a']++;
        }//count the frequencies of each character

        System.out.println(Arrays.toString(count));
        for (int i = 0; i < count.length ; i++) {
            if (count[i]>0){
                System.out.println((char) (i+'a')+" "+ count[i]);
            }
        }
    }
}
