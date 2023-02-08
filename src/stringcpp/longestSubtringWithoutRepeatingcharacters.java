public class longestSubtringWithoutRepeatingcharacters {
    public int lengthOfLongestSubstring(String s) {

        // n square solution
        // HashSet<Integer,Integer> map = new HashSet<>();
        // int max=0;
        // for(int i=0;i<s.length();i++){
        // for(int j=i;j<s.length();j++){
        // if(map.contains(s.charAt(j))){
        // break;
        // }
        // else{
        // map.add(s.charAt (j));
        // max=Math.max(max,j-i+1);
        // }
        // }
        // map.clear();
        // }
        // return max;
        int m[] = new int[256];
        for (int i : m) {
            m[s.charAt(i) - 'a']++;
        }
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

    public static void main(String[] args) {

    }

}
