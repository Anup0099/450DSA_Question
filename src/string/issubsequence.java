package string;

public class issubsequence {
    public static boolean isSubsequence(String s,
                                        String t) {
        //check if s is a subsequence of t
        int k=0;
        for (int i = 0; i <t.length() ; i++) {
            if (s.charAt(i)==t.charAt(k)){
                k++;
            }
        }
        if (k==s.length()){
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        System.out.println( isSubsequence("abc","ahbgdc"));

    }
}
