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

    // a2b35c68
    @Override
    public int f1(String str) {
        int sum = 0;
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            char[] a = str.toCharArray();
            if (Character.isDigit(a[i])) {
                int primeNum = Integer.parseInt("" + a[i]);
                if (isPrime(primeNum)) {
                    sum += primeNum;
                }
            }
        }
        return sum;
    }

    @Override
    public String f2(String str) {
        int count = 0;
        int max = 0;
        String s1= "";
        String[] s = str.split("\\s+");
        for (int i = 0; i < s.length; i++) {
            for (int j = 0; j < s.length; j++) {
                if (s[i].equals(s[j])) {
                    count++;
                }
            }
            if (count > max) {
                max = count;
                s1 = s[i];
            }
            count = 0;
        }
        String result = str.replace(s1, "T");
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
