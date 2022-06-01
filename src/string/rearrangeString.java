package string;

import java.util.HashMap;

public class rearrangeString {
    public static int rearrangeCharacters(String s, String target) {
        HashMap<Character,Integer>mapp=new HashMap< Character, Integer>();
        HashMap<Character,Integer>mapp2=new HashMap   <Character, Integer>();

        for (int i = 0; i <target.length() ; i++) {
            mapp.put(target.charAt(i),mapp.getOrDefault(target.charAt(i)+"",
                    0)+1);
        }//putting the values in the hashmap

        for (int i = 0; i <s.length() ; i++) {
            mapp2.put(s.charAt(i),mapp2.getOrDefault(s.charAt(i)+"",0)+1);
        }
        int count=1000;
        for(Character i:mapp2.keySet()){
            if(mapp.containsKey(i)){
                count =Math.min(mapp.get(i)/mapp2.get(i),count);
            }//checking if the character is present in the target string
        }
        return  count;

    }

    public static void main(String[] args) {
        System.out.println(rearrangeCharacters("ilovecodingonleetcode",
                "code"));//2
        System.out.println(rearrangeCharacters("aab",   "bbb"));//0
    }
}
