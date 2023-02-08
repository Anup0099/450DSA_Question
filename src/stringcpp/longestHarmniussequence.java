import java.util.HashMap;
import java.util.Map;

/**
 * longestHarmniussequence
 */
public class longestHarmniussequence {
    public int findLHS(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        int maxLHS = 0;
        for (int el : nums) {

            int currfrq = map.getOrDefault(el, 0);
            map.put(el, currfrq + 1);

        }
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            int currKey = entry.getKey();
            int freq = entry.getValue();
            int currLHS = 0;
            if (map.contains(currKey + 1)) {
                currLHS = freq + map.get(currKey+1);

            }
            maxLHS = Math.max(maxLHS, currLHS);
        }
        return maxLHS;

    }

    public static void main(String[] args) {

    }
}