class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int[] m = new int[26];
        for (int i = 0; i < s1.length(); i++) {
            m[s1.charAt(i) - 'a']++;
        }

        // for(int i:s2Array){
        // System.out.println(i);
        // }
        int j = 0, i = 0;
        int total_Chars = s1.length();
        while (j < s2.length()) {
            if (m[s2.charAt(j++) - 'a']-- > 0) {
                total_Chars--;
            }
            if (total_Chars == 0)
                return true;
            if (j - i == s1.length() && m[s2.charAt(i++) - 'a']++ >= 0) {
                total_Chars++;
            }

        }
        return false;
    }
}