package Hashing;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;

public class RemoveDuplicates {
    public static ArrayList<Integer> removeDup(ArrayList<Integer>a){
        HashMap<Integer,Boolean>map=new HashMap<Integer, Boolean>();
        ArrayList<Integer>arr= new ArrayList<>();
        for (int i = 0; i < a.size() ; i++) {
            if (map.containsKey(a.get(i))){
                continue;
            }
            arr.add(a.get(i));
            map.put(a.get(i),true);
        }
        return arr;
    }
    public static void main(String[] args) {
        ArrayList<Integer>a=new ArrayList<Integer>();
        a.add(1);
        a.add(1);
        a.add(2);
        a.add(3);
        a.add(4);
        System.out.println(removeDup(a));

    }
}
