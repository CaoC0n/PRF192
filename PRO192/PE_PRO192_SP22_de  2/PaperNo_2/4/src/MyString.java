/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Asus
 */
public class MyString implements IString {

    @Override
    public int f1(String str) {
        int count = 0;
        String[] s = str.split("\\s+");
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
        String[] s = str.split("\\s");
        String s1 = "";
        for (int i = 0; i < s.length; i++) {
            if (checkPallin(s[i])) {
                s1 = s[i];
                break;
            }
        }
        String output = str.replaceFirst(s1, "XX");
        return output.trim();
    }

    public boolean checkPallin(String s) {
        StringBuffer stringBuffer = new StringBuffer(s);
        if (stringBuffer.reverse().toString().equals(s)) {
            return true;
        }
        return false;

    }

}
