package string;

public class FaultyKeyboard {
    public static void main(String[] args) {
        System.out.println();
    }
    static boolean isLongPress(String named,String typed){
        if (named.length()>typed.length())return false;
        int i=0,j=0;
        while (i<named.length() && j<typed.length()){
            if (named.charAt(i)==typed.charAt(j)){
                i++;
                j++;

            }else if ( i>0 && named.charAt(i-1)==typed.charAt(j)){
                j++;
            }else{
                return false;
            }
        }
        while (j<typed.length() ){
            if (named.charAt(i-1)!=typed.charAt(j))return false;
        }
        return i<named.length() ? false : true;
    }
}
