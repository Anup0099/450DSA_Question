class ninjasTraining {
    public static int f(int day, int last, int[][] points, int[][] dp) {
        if (d[day][last] != -1)
            return dp[day][last];
        if (day == 0) {
            int maxi = 0;
            for (int i = 0; i <= 2; i++) {
                if (i != last) {
                    maxi = Math.max(maxi, points[0][i]);
                }
            }
            return dp[day][last] = maxi;
        }
        int maxi = 0;
        for (int i = 0; i <= 2; i++) {
            if (i != last) {
                maxi = Math.max(maxi, points[day][i] + f(day - 1, i, points, dp));
            }
        }
        return dp[day][last] = maxi;

    }

    public static void main(String[] args) {

    }
}