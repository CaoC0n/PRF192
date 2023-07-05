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
        for (int i = 0; i < str.length(); i++) {
            char[] a = str.toCharArray();
            if (Character.isDigit(a[i])) {
                int currentNumber = Integer.parseInt("" + a[i]);
                if (isPrime(currentNumber)) {
                    count++;
                }
            }
        }
        return count;
    }

    @Override
    public String f2(String str) {
        String[] s = str.split("\\s");
        String result = "";
        for (int i = s.length - 1; i >= 0; i--) {
            result += " " + s[i];
        }
        return result.trim();
    }

    private boolean isPrime(int n) {
        if (n < 2) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    
}
