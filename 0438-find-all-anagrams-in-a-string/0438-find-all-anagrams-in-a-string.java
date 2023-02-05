class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer> result = new ArrayList<>();
        int[] pArray = new int[26];
        int[] sArray = new int[26];
        for (int i = 0; i < p.length(); i++) {
            pArray[p.charAt(i) - 'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
            sArray[s.charAt(i) - 'a']++;
            if (i >= p.length()) {
                sArray[s.charAt(i - p.length()) - 'a']--;
            }
            if (Arrays.equals(pArray, sArray)) {
                result.add(i - p.length() + 1);
            }
        }
        return result;
    }
}