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
        int sum = 0;
        char[] a = str.toCharArray();
        for (int i = 0; i < str.length(); i++) {
            if ("13579".contains("" + a[i])) {
                sum += a[i] - '0';
            }
        }
        return sum;
    }

    @Override
    public String f2(String str) {
        String[] s = str.split("\\s+");
        int max = 0;
        int pos = -1;
        for (int i = 0; i < s.length; i++) {
            if (max < s[i].length()) {
                max = s[i].length();
                pos = i;
            }
        }
        String output = "";
        for (int i = 0; i < s.length; i++) {
            if (i != pos) {
                output += s[i] + " ";
            }
        }
        output += s[pos];
        return output.trim();
    }

}
