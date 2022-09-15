package string;

public class deleteDuplicates {
    deleteDuplicates node;
    int val;

    void Deletdups(deleteDuplicates n){

    }
    public static int myAtoi(String s) {
            int result=0;
            int sign=1;
        for (int i = 0; i <s.length() ; i++) {
            if (s.charAt(i)=='-'){
                sign=-1;

            }
            else if (s.charAt(i)-'0'>='0' && s.charAt(i)-'0'<='9'){
                return -1;
            }else{
                result = result*10+s.charAt(i)-'0';
            }
        }
        return result*sign;
    }
    public static void main(String[] args) {
            String s="-324";
        System.out.println(myAtoi(s));

    }
}
