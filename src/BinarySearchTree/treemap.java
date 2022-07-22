import java.util.TreeMap;

public class treemap {
    public static void main(String[] args) {
        TreeMap<Integer, Integer> map = new TreeMap<Integer, Integer>();
        map.put(1, 10);
        map.put(2, 20);
        map.put(3, 30);
        map.put(4, 40);
        
        System.out.println(map.get(1));
        System.out.println(map.higherEntry(2).getValue());
        System.out.println(map.lowerEntry(2).getValue());
        System.out.println(map.firstKey());
        System.out.println(map.lowerEntry(3).getValue());
    }
}
