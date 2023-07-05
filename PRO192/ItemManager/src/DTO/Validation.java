/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DTO;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class Validation {

    private final Scanner sc = new Scanner(System.in);

    public int getInt(String msg, int min, int max) {
        int result;
        //loop until user enter a positive decimal in range of input
        do {
            System.out.print(msg);
            String input = sc.nextLine().trim();
            //user enter nothing or whitespace
            try {
                if (input.isEmpty()) {
                    System.err.println("Input can not be empty");
                    continue;
                }
                result = Integer.parseInt(input);
                //user input a number out of range
                if (result < min || result > max) {
                    System.err.println("Input out of range");
                } else {
                    return result;
                }
            } //user enter a string
            catch (NumberFormatException StringInput) {
                System.err.println("Input is not a number");
            }
        } while (true);
    }

    public int getInput(String msg) {
        double output;
        do {
            System.out.print(msg);
            String input = sc.nextLine().trim();
            try {
                if (input.isEmpty()) {
                    System.err.println("Input can not be empty");
                    continue;
                }
                output = Double.parseDouble(input);
                if (output < 0) {
                    System.err.println("Input can not be negative");
                    continue;
                }
                if (output == 0) {
                    System.err.println("Input can not be 0");
                    continue;
                }
                if ((int) output != output) {
                    System.err.println("Input can not be a real number");
                } else {
                    return (int) output;
                }
            } catch (NumberFormatException StringInput) {
                System.err.println("Input can not be a string");
            }
        } while (true);
    }

    public String getString(String msg, String regex) {
        while (true) {
            try {
                System.out.print(msg);
                String str = sc.nextLine();
                if (str.isEmpty()) {
                    System.err.println("Invalid!");
                    continue;
                }
                if (str.matches(regex)) {
                    return str;
                }
            } catch (Exception e) {
                System.out.println(e);
            }
            System.err.println("Invalid!");
        }
    }

    public boolean checkBoolean(String mess, int min, int max) {
        int input;
        while (true) {
            System.out.print(mess);
            String in = sc.nextLine().trim();
            try {
                if (in.isEmpty()) {
                    System.err.println("Input can not be empty");
                    continue;
                }
                input = Integer.parseInt(in);
                //user input a number out of range
                if (input < min || input > max) {
                    System.err.println("Input out of range");
                } else {
                    return input == 1;
                }
            } catch (NumberFormatException StringInput) {
                System.err.println("Input can not be a string");
            }

        }
    }
}
