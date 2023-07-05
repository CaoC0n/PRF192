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

    @Override
    public int f1(String str) {
        int count = 0;
        String[] s = str.split("\\s+");
        for (String s1 : s) {
            if (Character.isDigit(s1.charAt(s1.length() - 1))) {
                count++;
            }
        }
        return count;
    }

    @Override
    public String f2(String str) {
        String[] s = str.split("\\s+");
        for (int i = s.length - 4; i < s.length - 1; i++) {
            for (int j = i + 1; j < s.length; j++) {
                if ((s[i].compareTo(s[j]) > 0)) {
                    String temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        String result = "";
        for (int i = 0; i < s.length; i++) {
            result += s[i] + " ";
        }

        return result.trim();
    }

}
