package BinarySearchTree;

import java.util.Iterator;
import java.util.TreeSet;

public class treeSet {
    public static void main(String[] args) {
        TreeSet<String>s=new TreeSet<String>();
        s.add("gfg");
        s.add("course");
        s.add("ide");
        s.add("tree");
        s.remove("course");
        s.lower("ide");
        s.floor("ide");
        s.ceiling("ide");
        s.higher("ide");
        System.out.println(s);
        System.out.println(s.contains("course"));
        Iterator<String>it=s.iterator();
        while (it.hasNext())
        {
            System.out.println(it.next());
        }
        for(String value:s){
            System.out.println(value);
        }

    }
}
