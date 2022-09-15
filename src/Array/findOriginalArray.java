package Array;

import java.awt.geom.QuadCurve2D;
import java.util.*;

public class findOriginalArray {
    public static int[] findOriginalArray(int[] changed) {
        List<Integer> li = new ArrayList<>();
        Queue<Integer> q = new LinkedList<>();
        Arrays.sort(changed);
        for (int nums : changed
        ) {
            if (!q.isEmpty() && nums == q.peek()) {
                q.poll();
            } else {
                q.offer(nums * 2);
                li.add(nums);
            }

        }
        return !q.isEmpty() ? new int[]{} :
                li.stream().mapToInt(i -> i).toArray();
    }

    public static void main(String[] args) {
    }
}
