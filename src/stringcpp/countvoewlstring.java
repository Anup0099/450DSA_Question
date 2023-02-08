package stringcpp;
// You are given a 0-indexed array of strings words and a 2D array of integers queries.

// Each query queries[i] = [li, ri] asks us to find the number of strings present in the range li to ri (both inclusive) of words that start and end with a vowel.

// Return an array ans of size queries.length, where ans[i] is the answer to the ith query.

// Note that the vowel letters are 'a', 'e', 'i', 'o', and 'u'.
import java.util.List;

/**
 * countvoewlstring
 */
public class countvoewlstring {

    public int[] vowelStrings(String[] words, int[][] queries) {
       //o(logn) solution
        int[] ans = new int[queries.length];
        int[] count = new int[words.length];
        for (int i = 0; i < words.length; i++) {
            count[i] = countVowel(words[i]);
        }
        for (int i = 0; i < queries.length; i++) {
            int start = queries[i][0];
            int end = queries[i][1];
            int sum = 0;
            for (int j = start; j <= end; j++) {
                sum += count[j];
            }
            ans[i] = sum;
        }
        return ans;

    }

    public static void main(String[] args) {

    }
}