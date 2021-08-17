package com.company;

public class RotationString {
    public static void main(String[] args) {
        String s1 ="heelo";
        String s2 = "helllo";
        if(sreRotation(s1,s2)) System.out.println("strig are rotation of each other");
        else
            System.out.println("strings are not");

    }
    static boolean sreRotation(String s1,String s2){
        //the length of str1.length and str2.length must be same
        //also str2 must  be a substring of  str1+str1
        return (s1.length()==s2.length()) && ((s1+s1).indexOf(s2)!=-1);
    }
}
