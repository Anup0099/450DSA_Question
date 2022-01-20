package stack;

import java.util.Arrays;
import java.util.Scanner;
import java.util.Stack;

public class duplicate {
    public static int fibdp(int n ,int dp[]){
        if (n<=1)return  n;
        if (dp[n]!=-1)return  dp[n];

        return dp[n]= fibdp(n-1,dp)+fibdp(n-2,dp);
    }

    public static void removeduplicate(){
        Scanner scn = new Scanner(System.in);
        String s = scn.next();
        Stack<Character>st = new Stack<>();
        int i=0;
        while(i<s.length()){
            if (st.isEmpty()){
                st.push( s.charAt(i));
            }
            else{
                if (st.peek()==s.charAt(i)){
                    st.pop();
                }else{
                    st.push( s.charAt(i));
                }
            }
            i++;
        }
        s= "";
        while (!st.isEmpty()){
            s= st.peek()+s;
            st.pop();
        }
        System.out.println(s);

    }
    public static void main(String[] args) {
        int n=55;
        int dp[]= new int[n+1];
        Arrays.fill(dp,-1);
        System.out.println(fibdp(n,dp));


    }

}
