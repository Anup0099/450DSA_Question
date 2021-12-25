package BinaryTree;

import java.util.HashMap;
import java.util.HashSet;

public class noofemployees {
    private  static void findCount(HashMap<String,String>map){
        HashMap<String , HashSet<String>>tree= new HashMap<>();
        String ceo = " ";
        for (String emp:map.keySet()
             ) {
            String man = map.get(emp);
            if (man.equals(emp)){
                ceo=man;

            }else{
                if (map.containsKey(man)){
                    HashSet<String>emps = new HashSet<>();
                    emps.add(emp);
                }else{
                    HashSet<String>emps = new HashSet<>();
                    emps.add(emp);
                    map.put(man,emp);
                }
            }

        }

    }
    public static void getSize(HashMap<String,HashSet<String>>tree,String man
            ,HashMap<String,Integer>result){

    }
    public static void main(String[] args) {

    }
}
