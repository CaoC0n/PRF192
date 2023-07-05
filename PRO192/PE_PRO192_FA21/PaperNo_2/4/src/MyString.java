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
        String[] s = str.split("\\s");
        for (int i = 0; i < s.length; i++) {
            char[] a = s[i].toCharArray();
            for (int j = 0; j < a.length; j++) {
                if ("13579".contains("" + a[j])) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }

    @Override
    public String f2(String str) {
        int pos = -1;
        String[] s = str.split("\\s");
        for (int i = 0; i < s.length; i++) {
            if(check(s[i])) {
                pos = i;
                break;
            }
        }
        s[pos] = "XX";
        String output = "";
        for (int i = 0; i < s.length; i++) {
            output += s[i] + " ";
        }
        return output.trim();
    }

    private boolean check(String s) {
        StringBuilder stringBuffer = new StringBuilder(s);
        if (stringBuffer.reverse().toString().equals(s)) {
            return true;
        }
        return false;
    }

}
