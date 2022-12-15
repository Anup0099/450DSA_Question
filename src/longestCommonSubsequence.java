public class longestCommonSubsequence {
    //some recurrences
    //express in terms of indexes
    //explore possibility
    //take the best among them
    //memoize
    public int longestCommonSubsequence(String text1,
                                        String text2) {
        //tabulation
        int[][] dp = new int[text1.length() + 1][text2.length() + 1];
        for (int i = 1; i <= text1.length(); i++) {
            for (int j = 1; j <= text2.length(); j++) {
                if (text1.charAt(i - 1) == text2.charAt(j - 1)) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[text1.length()][text2.length()];
    }

    public int longestCommonSubsequenceRecursive(String text1,
                                                 String text2) {
        //recursion
        return lcs(text1, text2, text1.length(), text2.length());
    }

    private int lcs(String text1,
                    String text2,
                    int length,
                    int length1) {
        if (length == 0 || length1 == 0) {
            return 0;
        }
        if (text1.charAt(length - 1) == text2.charAt(length1 - 1)) {
            return 1 + lcs(text1, text2, length - 1, length1 - 1);
        }else {
            return Math.max(lcs(text1, text2, length - 1, length1),
                            lcs(text1, text2, length, length1 - 1));
        }

    }

    public static void main(String[] args) {
        longestCommonSubsequence lcs = new longestCommonSubsequence();
        String text1 = "abcde";
        String text2 = "ace";
        System.out.println(lcs.longestCommonSubsequence(text1, text2));
        System.out.println(lcs.longestCommonSubsequenceRecursive(text1,
                                                                 text2));

    }
}
