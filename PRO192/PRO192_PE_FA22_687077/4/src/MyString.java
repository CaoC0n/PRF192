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
        int countDigit = 0;
        String[] s1 = str.split("\\s");
        for (String s : s1) {
            char[] a = s.toCharArray();
            for (char c : a) {
                if (Character.isDigit(c)) {
                    countDigit++;
                }
            }
            if (countDigit == 2) {
                count++;
            }
            countDigit = 0;
        }
        return count;
    }

    @Override
    public String f2(String str) {
        String[] s = str.split("\\s");
        int count = 0;
        String s1 = "";
        for (int i = 0; i < s.length - 1; i++) {
            for (int j = i + 1; j < s.length; j++) {
                if (s[i].equals(s[j])) {
                    count++;
                }
            }
            if (count == 2) {
                s1 = s[i];
                break;
            }
            count = 0;
        }
        String result = str.replace(s1, "V");
        return result.trim();
    }

}
