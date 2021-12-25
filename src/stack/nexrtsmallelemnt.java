package stack;

import java.util.*;

public class nexrtsmallelemnt {
    public static int[] solve(int[]arr){
        int []ans = new int[arr.length];
        Stack<Integer>st = new Stack<>();
        for (int i = arr.length-1; i >0 ; i--) {
            while(st.size()>0 && st.peek()>arr[i])st.pop();
            int answer;
            if (st.size()>0){
                answer= st.peek();
            }else{
                answer =-1;
            }
            ans[i]=answer;
            st.push(arr[i]);

        }
        return ans;


    }
    public static List<Integer> solved(int[]arr){
//        int []ans = new int[arr.length];
        List<Integer>ans = new ArrayList<>(arr.length);
        Stack<Integer>st = new Stack<>();
        for (int i = arr.length-1; i >0 ; i--) {
            while(st.size()>0 && st.peek()>arr[i])st.pop();
            int answer;
            if (st.size()>0){
                answer= st.peek();
            }else{
                answer =-1;
            }
            ans.add(answer);
            st.push(arr[i]);

        }
        return ans;


    }
    public static  int[]next(int []arr){
        int arr1[] =new int[arr.length];
        Stack<Integer>st = new Stack<>();
        st.push(arr.length-1);
        arr1[arr.length-1]=-1;
        for (int i = arr.length-2; i >0 ; i--) {
            while (st.size()>0 && arr[i]>st.peek()){
                st.pop();
            }
            if (st.size()==0){
                arr1[i]=-1;
            }else{
                arr1[i]=st.peek();
            }
            st.push(arr[i]);
        }
        return arr1;
    }
    public static int solution(String str){
        int ans=0;
        int i =-1;
        int j=-1;
        HashMap<Character,Integer>map= new HashMap<>();
        while (true){
            while(i<str.length()-1){
                i++;
                char ch = str.charAt(i);
                map.put(ch,map.getOrDefault(ch,0)+1);
                if (map.get(ch)==2){
                    break;
                }else{
                    int len = i-j;
                    if (len>ans){
                        ans = len;
                    }
                }
            }
            while (j<i){
                j++;
                char ch = str.charAt(j);
                map.put(ch,map.get(ch)-1);

            }
        }


    }
    public static void main(String[] args) {
        int []arro={5,2,6,1,45,8};
        System.out.println(Arrays.toString(next(arro)));



    }
}
