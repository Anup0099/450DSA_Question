package Sets;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;

public class hashset {
    public static void printfreq(int arr[]){

        for (int i = 0; i < arr.length ; i++) {
            boolean flag = false;
            for (int j = 0; j <i ; j++) {
                if (arr[i]==arr[j])
                {
                    flag =true;
                    break;

                }

                }
            if (flag==true){
                continue;

            }
            int freq=1;
            for (int j = i+1; j < arr.length ; j++) {
                if (arr[i]==arr[j]){
                    freq++;
                }
            }
            System.out.println(arr[i]+" "+freq);
        }


    }
    public static int countDistincts(int arr[]){
        int res =0;
        for (int i = 0; i < arr.length ; i++) {
            boolean flag=false;
            for (int j = 0; j <i ; j++) {
                if(arr[i]==arr[j]){
                    flag=true;
                    break;
                }
            }
            if (!flag){
                res++;

            }
        }
        return res;

    }
    public static int count(int arr[]){
        HashSet<Integer>h=new HashSet<>();
        for (int i = 0; i < arr.length ; i++) {
            h.add(arr[i]);
        }
        return h.size();
    }
    public static void main(String[] args) {
//        HashSet<String>h= new HashSet<>();
//        h.add("gfgf");
//        h.add("add");
//        System.out.println(h.contains("anup"));
//        Iterator<String> i= h.iterator();
//        while(i.hasNext()){
//            System.out.println(i.next()+"");
//        }
//        System.out.println(h);
//        HashMap<String,Integer>map = new HashMap<>();
//        map.put("gfg",23);
//        map.put("gfgg",25);
//        map.put("gfggh",250);
//        map.put("gfgghj",256);
//        for(Map.Entry<String,Integer>e:map.entrySet()){
//            System.out.println(e.getKey()+" "+e.getValue());
//        }
        int arr[]={10,20,10,20,30};
        printfreq(arr);

    }
}
