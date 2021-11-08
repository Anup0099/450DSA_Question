package Hashing;

import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class duparr {
    public static void main(String[] args) {
        int arr[] = {1, 5, 2, 1, 3, 2, 1};
        int n = arr.length;

        System.out.println(mostfrequent(arr, n));
    }
    static int mostfrequent(int []arr,int n){
        Map<Integer,Integer>hp = new HashMap<Integer, Integer>();
        for (int i = 0; i <n ; i++) {
            int key=arr[i];
            if (hp.containsKey(key)){
                int freq = hp.get(key);
                freq++;
                hp.put(key,freq);

            }else{
                hp.put(key,1);
            }

        }
        int max_count = 0,res=-1;
        for (Map.Entry<Integer,Integer>val:hp.entrySet()) {
            if (max_count < val.getValue()){
                res = val.getKey();
                max_count = val.getValue();
            }
        }
        return  res;
    }
}
