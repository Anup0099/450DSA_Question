public class sepataresdigitsinanaasrray {
    public int[] separateDigits(int[] nums) {
        // first convert in to string each element in array
        List<Integer> ans = new ArrayList<>();
        String s = "";
        for (int i = 0; i < nums.length; i++) {
            s += nums[i];
        }
        // [1,2,3,4,5,6,7,8,9] convert and add in string 1234566
        // then convert in int and put in array
        for (int i = 0; i < s.length(); i++) {
            ans.add(s.charAt(i) - '0');
        }
        int[] ans1 = new int[ans.size()];
        for (int i = 0; i < ans.size(); i++) {
            ans1[i] = ans.get(i);
        }
        return ans1;
    }

    public static void main(String[] args) {
    }

}
