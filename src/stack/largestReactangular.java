import java.util.ArrayDeque;

/**
 * largestReactangular
 */
public class largestReactangular {
    static int getmax(int[] arr) {
        int n = arr.length;
        ArrayDeque<Integer> q = new ArrayDeque<>();
        int res = 0;
        for (int i = 0; i < arr.length; i++) {
            while (q.isEmpty() == false && arr[q.peek()] >= arr[i]) {
                int tp = q.pop();
                int curr = arr[tp] * (q.isEmpty() ? i : (i - q.peek() - 1));
                res = Math.max(res, curr);
            }
            q.push(i);
        }
        while (q.isEmpty() == false) {
            int tp = q.pop();
            int curr = arr[tp] * (q.isEmpty() ? n : (n - q.peek() - 1));
            res = Math.max(res, curr);
        }
        return res;
    }

    public static void main(String[] args) {
        int[] arr = { 6, 2, 5, 4, 1, 5, 6 };
        System.out.println(getmax(arr));

    }
}