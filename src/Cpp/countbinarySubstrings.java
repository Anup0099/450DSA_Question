import java

public class countbinarySubstrings {

    public int countBinarySubstrings(String s) {
        int curr = 1, prev = 0, sum = 0;
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i) == s.charAt(i - 1)) {
                curr++;
            } else {
                sum += Math.min(prev, curr);
                prev = curr;
                curr = 1;
            }
        }
        sum += Math.min(prev, curr);
        return sum;

    }

    public static void main(String[] args) {
        countbinarySubstrings c = new countbinarySubstrings();
        System.out.println(c.countBinarySubstrings("00110011"));
        System.out.println(c.countBinarySubstrings("10101"));
    }

}
