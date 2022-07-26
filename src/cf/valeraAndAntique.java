package cf;

import java.util.ArrayList;
import java.util.Scanner;

public class valeraAndAntique {
    public static void main(String[] args) {
        Scanner scn= new Scanner(System.in);
        int n=scn.nextInt();
        int v=scn.nextInt();
        ArrayList<Integer> al=new ArrayList<Integer>();
        for(int i=0;i<n;i++){
            int k=scn.nextInt(),count=0;

            for(int j=0;j<k;j++){
                if (scn.nextInt()<v){
                    count++;
                }
            }
            if(count>0)al.add(i+1);
        }
        System.out.println(al.size());
        for(int i=0;i<al.size();i++){
            System.out.print(al.get(i)+" ");
        }
    }
}
