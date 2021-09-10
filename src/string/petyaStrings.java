package string;

import java.util.*;





public class petyaStrings {

    public static void main(String[] args) {
        Scanner fs = new Scanner(System.in);




            String s = fs.next(),s1= fs.next();
            s=s.toLowerCase();
            s1=s1.toLowerCase();
            if(s.compareTo(s1)>0){
                System.out.println("1");
            }else if(s.compareTo(s1)<0){
                System.out.println("-1");
            }else {
                System.out.println("0");
            }
        }


    }

