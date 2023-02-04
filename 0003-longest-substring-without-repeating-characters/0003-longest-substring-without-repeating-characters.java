class Solution {
    public int lengthOfLongestSubstring(String s) {
          int m[] = new int[256];
       
        int l = 0, r = 0;
        int ans = 0;

        while (r < s.length()) {
            m[s.charAt(r)]++;
            while (m[s.charAt(r)] > 1) {
                m[s.charAt(l)]--;
                l++;
            }
            ans = Math.max(ans, r - l + 1);
            r++;

        }
        return ans;
    }
}