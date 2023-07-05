/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projectpro192;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class Validation {

    private final Scanner sc = new Scanner(System.in);

    public int getInt(String msg, int min, int max) {
        int result;

        do {
            System.out.print(msg);
            String input = sc.nextLine().trim();
            try {

                if (input.isEmpty()) {
                    System.err.println("Input can not be empty");
                    continue;
                }
                result = Integer.parseInt(input);

                if (result < min || result > max) {
                    System.err.println("Input out of range");
                } else {
                    return result;
                }
            } catch (NumberFormatException StringInput) {
                System.err.println("Input is not a number");
            }
        } while (true);
    }

    public double getGrade(String msg, double min, double max) {
        double grade;

        do {
            System.out.print(msg);
            String input = sc.nextLine().trim();
            try {

                if (input.isEmpty()) {
                    System.err.println("Input can not be empty");
                    continue;
                }
                grade = Double.parseDouble(input);

                if (grade < min || grade > max) {
                    System.err.println("Input out of range");
                    continue;
                }

                if (grade < 0) {
                    System.err.println("Input can not be negative");
                } else {
                    return grade;
                }
            } catch (NumberFormatException StringInput) {
                System.err.println("Input is not a number");
            }
        } while (true);
    }

    public String getString(String msg, String err, String regex, String ignore) {
        while (true) {
            try {
                System.out.print(msg);
                String str = sc.nextLine().trim();
                if (str != null && str.trim().equalsIgnoreCase(ignore)) {
                    return null;
                }
                if (str.matches(regex)) {
                    return str;
                }
            } catch (Exception e) {
                System.out.println(e);
            }
            System.err.println(err);
        }
    }
}
