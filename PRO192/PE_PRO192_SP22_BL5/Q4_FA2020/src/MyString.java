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

    
    // a1 b123 c1244 d56 h123k 
    @Override
    public int f1(String str) {
        String[] s1 = str.split("\\s");
        int count = 0;
        for (String s : s1) {
            int countDigit = 0;
            for (int i = 0; i < s.length(); i++) {
                if (Character.isDigit(s.charAt(i))) {
                    countDigit++;
                }
            }
            if (countDigit >= 3) {
                count++;
            }
        }
        return count;
    }

    
    // ab bc de hoa ef la la
    @Override
    public String f2(String str) {
        String result = "";
        String[] s1 = str.split("\\s");
        int check = 0;
        for (String s : s1) {
            if (isCheckSorted(s) || check == 1) {
                result += " " + s;
            } else {
                check = 1;
            }
        }
        return result.trim();
    }

    private boolean isCheckSorted(String s) {
        for (int i = 0; i < s.length() - 1; i++) {
            if (s.charAt(i) > s.charAt(i + 1)) {
                return false;
            }
        }
        return true;
    }

}
