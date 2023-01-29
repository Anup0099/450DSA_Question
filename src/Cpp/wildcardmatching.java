
/**
 * wildcardmatching
 */
public class wildcardmatching {
    public boolean isMatch(String s, String p) {
        int sLen = s.length();
        int pLen = p.length();
        boolean[][] dp = new boolean[sLen + 1][pLen + 1];
        dp[0][0] = true;
        for (int i = 1; i <= pLen; i++) {
            if (p.charAt(i - 1) == '*') {
                dp[0][i] = dp[0][i - 1];
            }
        }
        for (int i = 1; i <= sLen; i++) {
            for (int j = 1; j <= pLen; j++) {
                if (p.charAt(j - 1) == '*') {
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                } else if (p.charAt(j - 1) == '?' || s.charAt(i - 1) == p.charAt(j - 1)) {
                    dp[i][j] = dp[i - 1][j - 1];
                }
            }
        }
        return dp[sLen][pLen];

    }

    public static void main(String[] args) {
        wildcardmatching w = new wildcardmatching();
        System.out.println(w.isMatch("aa", "a"));
        System.out.println(w.isMatch("aa", "*"));
        System.out.println(w.isMatch("cb", "?a"));
        System.out.println(w.isMatch("adceb", "*a*b"));
        System.out.println(w.isMatch("acdcb", "a*c?b"));

    }
}