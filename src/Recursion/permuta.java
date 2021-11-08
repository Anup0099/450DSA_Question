package Recursion;

import java.io.*;
import java.util.*;

public class permuta {

  public static void permutations(int[] boxes, int ci, int ti){
    // write your code here

  }

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int nboxes = Integer.parseInt(br.readLine());
    int ritems = Integer.parseInt(br.readLine());
    permutations(new int[nboxes], 1, ritems);
  }

}