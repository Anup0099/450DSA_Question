import java.util.Arrays;

public class closedtSeats {
    public int maxDistanceClosest(int[] seats) {
        int n = seats.length;

        int[] left = new int[n];
        Arrays.fill(left, -1);

        int[] right = new int[n];
        Arrays.fill(right, -1);

        int i = 0;

        int lastOne = -1;
        int maxDis = -1;

        while (i < n) {
            if (seats[i] == 1) {
                lastOne = i;
            } else {
                left[i] = lastOne;
                maxDis = 1;
            }
            i++;
        }

        i = n - 1;
        lastOne = -1;
        while (i >= 0) {
            if (seats[i] == 1) {
                lastOne = i;
            } else {
                right[i] = lastOne;
            }
            i--;
        }

        for (i = 0; i < n; i++) {
            if (seats[i] == 0) {
                int leftDis = (left[i] != -1) ? i - left[i] : Integer.MAX_VALUE;
                int rightDis = (right[i] != -1) ? right[i] - i : Integer.MAX_VALUE;
                int currDis = Math.min(leftDis, rightDis);
                if (currDis > maxDis) {
                    maxDis = currDis;
                }
            }
        }
        return maxDis;
    }

    public static void main(String[] args) {
        
    }
}
