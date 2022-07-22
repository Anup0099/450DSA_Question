import java.util.HashMap;
import java.util.Map;

/**
 * MaxSumOfaPairWithEqualSumOFDigits
 */
public class MaxSumOfaPairWithEqualSumOFDigits {
    public static int maximumSum(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        int ans = -1;
        for (int num : nums) {
            int totalsum = getTotal(num);
            if (!map.containsKey(totalsum)) {
                map.put(totalsum, num);
            } else {
                ans = Math.max(ans, map.get(totalsum) + num);
            
                map.put(totalsum, Math.max(map.get(totalsum), num));

            }
        }
        return ans;
    }

    public static int getTotal(int num) {
        int total = 0;
        while (num > 0) {
            total += num % 10;
            num /= 10;
        }
        return total;
    }

    public static void main(String[] args) {
        int[] nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        System.out.println(maximumSum(nums));
    }
}