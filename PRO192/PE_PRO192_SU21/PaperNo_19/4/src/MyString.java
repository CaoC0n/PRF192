/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class MyString implements IString{

    @Override
    public int f1(String str) {
        int count = 0;
        String[] s = str.split("\\s");
        for (String item : s) {
            if (item.endsWith("m") || item.endsWith("n")) {
                count++;
            }
        }
        return count;
    }
    
    
    @Override
    public String f2(String str) {
        String[] words = str.split("\\s");
        int max = Integer.MIN_VALUE;
        int pos = -1;
        for (int i = 0; i < words.length; i++) {
            if (max < words[i].length()) {
                max = words[i].length();
                pos = i;
            }
        }
        String result = "";
        result = new StringBuilder(words[pos]).reverse().toString();
        str = str.replaceFirst(words[pos], result);
        return str;
    }
    
}
