import java.util.Arrays;

// You are given an integer array banned and two integers n and maxSum. You are choosing some number of integers following the below rules:

// The chosen integers have to be in the range [1, n].
// Each integer can be chosen at most once.
// The chosen integers should not be in the array banned.
// The sum of the chosen integers should not exceed maxSum.
// Return the maximum number of integers you can choose following the mentioned rules.
// Input: banned = [1,6,5], n = 5, maxSum = 6
// Output: 2
// Explanation: You can choose the integers 2 and 4.
// 2 and 4 are from the range [1, 5], both did not appear in banned, and their sum is 6, which did not exceed maxSum.
public class maximumnumbertochoosefromRange1 {
    public int maxCount(int[] banned, int n, int maxSum) {
        Arrays.sort(banned);
        int sum = 0;
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (!isPresent(banned, i)) {
                sum += i;
                if (sum <= maxSum) {
                    count++;
                }
            }
        }
        return count;

    }

    public int maxCount2(int[] banned, int n, int maxSum) {
        HashSet<Integer> set = new HashSet<>();
        for (int i : banned) {
            set.add(i);
        }
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (!set.contains(i) && maxSum >= i) {
                count++;
                maxSum -= i;
            }
        }
        return count;
    }

    public boolean iPresent(int[] banned, int num) {
        for (int i = 0; i < banned.length; i++) {
            if (banned[i] == num) {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {

    }

}
