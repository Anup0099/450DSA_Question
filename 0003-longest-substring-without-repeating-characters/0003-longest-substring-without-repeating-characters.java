class Solution {
    public int lengthOfLongestSubstring(String s) {
          HashSet<Character> map = new HashSet<>();
        int max=0;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(map.contains(s.charAt(j))){
                    break;
                }
                else{
                    map.add(s.charAt(j));
                    max=Math.max(max,j-i+1);
                }
            }
            map.clear();
        }
        return max;
    }
}