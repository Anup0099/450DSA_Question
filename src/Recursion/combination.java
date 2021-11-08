package Recursion;

import java.io.*;
import java.util.*;

public class combination {

  public static void combinations(int cb, int tb, int ssf, int ts, String asf){
    // write your code here

  }

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int nboxes = Integer.parseInt(br.readLine());
    int ritems = Integer.parseInt(br.readLine());
    combinations(1, nboxes, 0, ritems, "");
  }

}