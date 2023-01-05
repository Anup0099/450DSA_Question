package Queue;

import java.util.HashMap;

public class WordPattern {
    public static boolean wordPattern(String pattern,String s){
        String []arr=s.split(" ");
        if(pattern.length()!=arr.length){
            return false;
        }
        HashMap<Character,String>map=new HashMap<>();
        for(int i=0;i<pattern.length();i++){
            char c=pattern.charAt(i);
            if(map.containsKey(c)){
                if(!map.get(c).equals(arr[i])){
                    return false;
                }
            }
            else{
                if(map.containsValue(arr[i])){
                    return false;
                }
                map.put(c,arr[i]);
            }

        }
        return true;
    }
    public static void main(String[] args) {
        String pattern="abba";
        String s="dog cat cat dog";
        System.out.println(wordPattern(pattern,s));
    }
}
