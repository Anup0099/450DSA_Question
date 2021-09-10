package string;

public class StringCompression {
    public static void main(String[] args) {

    }
    static String compress(String s){
        String Sf = String.valueOf(s.charAt(0));

        for (int i = 0; i <s.length();  i++) {
            char curr = s.charAt(i);
            char prev = s.charAt(i - 1);

            if (curr != prev){
                s+=curr;
            }

        }
        return Sf;


    }
    static  String compress2(String s1){
        String sg =String.valueOf(s1.charAt(0));
        int count =1;
        for (int i = 0; i <s1.length() ; i++) {
            char curr = s1.charAt(i);
            char prev = s1.charAt(i-1);

            if (curr == prev){
                count++;
            }else{
                if (count>1){
                    sg += count;
                    count =1;
                }
                sg += curr;
            }
        }
        if (count>1){
            sg += count;
            count =1;
        }return sg;
    }
}
