package Hashing;

import java.util.HashMap;

public class subarrayasum {
    public static void main(String[] args) {

    }
    static void subArray(int[] array, int sum){
        int cursum=0;
        int start=0;
        int end = -1;
        HashMap<Integer,Integer>map = new HashMap<Integer,Integer>();
        for (int i = 0; i < array.length ; i++) {
            cursum += array[i];
            if (cursum==sum){
                start=0;
                end =i;
                break;
            }
            if (map.containsKey(cursum-sum)){
                start=map.get(cursum-sum)+1;
                end = i;
                break;
            }
            map.put(cursum,i);
        }
        if (end ==-1){
            System.out.println("not found");
        }else {
            System.out.println(start +" "+end);
        }

    }
}
