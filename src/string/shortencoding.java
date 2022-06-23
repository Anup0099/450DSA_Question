import java.util.*;

class shortencoding {
    public static int minimumLengthEncoding(String[] words) {
        Set<String> wordset = new HashSet<String>(Arrays.asList(words));
        for (String s : words) {
            for (int i = 0; i < s.length(); i++) {
                wordset.remove(s.substring(i));

            }

        }
        int length = 0;
        for (String s : wordset) {
            length += s.length() + 1;
        }
        return length;
    }

    public static void main(String[] args) {

    }
}