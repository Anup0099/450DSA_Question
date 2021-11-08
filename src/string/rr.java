package string;

public class rr {
    public static void main(String[] args) {
        System.out.println(skipAppString("bcappeffojjfoe"));
    }


    static void skip(String p,String up){
        if (up.isEmpty()){
            System.out.println(p);
            return;
        }
        char ch = up.charAt(0);
        if (ch=='a'){
            skip(p,up.substring(1));
        }
        else{
            skip(p+ch,up.substring(1));
        }
    }
    static String skips(String up){
        if (up.isEmpty()){

            return "";
        }
        char ch = up.charAt(0);
        if (ch=='a'){
           return skips(up.substring(1));
        }
        else{
          return   skips(up.substring(1));
        }
    }
    static String skipString(String up){
        if (up.isEmpty()){

            return "";
        }

        if (up.startsWith("apple")){
           return skipString(up.substring(5));
        }
        else{
          return up.charAt(0)+ skipString(up.substring(1));
        }
    }

    static String skipAppString(String up){
        if (up.isEmpty()){

            return "";
        }

        if (up.startsWith("app") && !up.startsWith("apple")){
            return skipAppString(up.substring(3));
        }
        else{
            return up.charAt(0)+ skipAppString(up.substring(1));
        }
    }




}
