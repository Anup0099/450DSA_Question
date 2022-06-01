package string;

import java.util.Scanner;

public class chatroom {
    public static void main(String[] args) {
        String b = "hello";
        int j=0,pas=0;
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        for (int i = 0; i <a.length() ; i++) {
            if (a.charAt(i)==b.charAt(j)){
                j++;
                pas++;
                if(pas==b.length()){
                    break;
                }
            }
        }
        if(pas==b.length()){
            System.out.println("yes");
        }else {
            System.out.println("no");
        }

    }

}
