/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class MyString implements IString {
    
    
    // dem so chuoi end with digit
    
    @Override
    public int f1(String str) {
        int count = 0;
        String[] s1 = str.split("\\s");
        for (String s : s1) {
            if (Character.isDigit(s.charAt(s.length() - 1))) {
                count++;
            }
        }
        return count;
    }
    
    
    // return the string by repalcing the first shortest word in str by it's length
    
    @Override
    public String f2(String str) {
        String[] s1 = str.split("\\s");
        int min = Integer.MAX_VALUE;
        for (String s : s1) {
            if (s.length() < min) {
                min = s.length();
            }
        }
        for (int i = 0; i < s1.length; i++) {
            if (s1[i].length() == min) {
                s1[i] = String.valueOf(min);
                break;
            }
        }
        String result = "";
        for (String s : s1) {
            result += s + " ";
        }
        return result.trim();
    }

}
