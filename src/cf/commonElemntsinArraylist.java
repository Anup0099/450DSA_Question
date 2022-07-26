package cf;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;

public class commonElemntsinArraylist {
    public static ArrayList<Integer> common_element(ArrayList<Integer>v1, ArrayList<Integer>v2)
    {
        ArrayList<Integer>result=new ArrayList<Integer>();
        HashMap<Integer,Integer>map=new HashMap<Integer,Integer>();
        HashMap<Integer,Integer>map2=new HashMap<Integer,Integer>();
        for(int i=0;i<v1.size();i++){
            if(map.containsKey(v1.get(i))){
                map.put(v1.get(i),map.get(v1.get(i))+1);
            }
            else{
                map.put(v1.get(i),1);
            }
        }

        for(int i=0;i<v2.size();i++) {
            if (map2.containsKey(v2.get(i))) {
                map2.put(v2.get(i), map2.get(v2.get(i)) + 1);
            } else {
                map2.put(v2.get(i), 1);
            }

        }
        for(int i=0;i<v1.size();i++){
            if(map2.containsKey(v1.get(i))){
                if(map.get(v1.get(i))==map2.get(v1.get(i))){
                    result.add(v1.get(i));
                }
            }
        }
        Collections.sort(result);
        return result;

    }
    public static void main(String[] args) {
        ArrayList<Integer>v1=new ArrayList<Integer>();
        v1.add(1);
        v1.add(2);
        v1.add(2);
        v1.add(4);
        v1.add(5);
        ArrayList<Integer>v2=new ArrayList<Integer>();
        v2.add(8);
        v2.add(2);
        v2.add(2);
        v2.add(4);
        v2.add(0);
        ArrayList<Integer>result=common_element(v1,v2);
        for(int i=0;i<result.size();i++)
        {
            System.out.println(result.get(i));
        }
    }
}
