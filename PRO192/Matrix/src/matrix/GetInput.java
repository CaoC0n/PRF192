/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package matrix;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class GetInput {

    public int getMenuChoice(String msg, int min, int max) {
        double choice;
        //loop until user enter a positive decimal in range of input
        do {
            System.out.print(msg);
            Scanner sc = new Scanner(System.in);
            String input = sc.nextLine().trim();
            try {
                //user enter nothing or whitespace
                if (input.isEmpty()) {
                    System.out.println("Input can not be empty");
                    continue;
                }
                choice = Double.parseDouble(input);
                //user input a number out of range
                if (choice < min || choice > max) {
                    System.out.println("Input out of range");
                }
                //user enter a real number
                if ((int) choice != choice) {
                    System.out.println("Input can not be a real number");
                } //if not return int value 
                else {
                    return (int) choice;
                }
            } //user enter a string
            catch (NumberFormatException StringInput) {
                System.out.println("Input can not be a string");
            }
        } while (true);
    }

    public static int getInt(String msg) {
        double output;
        //loop until user enter a positive decimal in range of input
        do {
            System.out.print(msg);
            Scanner sc = new Scanner(System.in);
            String input = sc.nextLine().trim();
            try {
                //user enter nothing or whitespace
                if (input.isEmpty()) {
                    System.out.println("Input can not be empty");
                    continue;
                }
                output = Double.parseDouble(input);
                //user enter a negative number
                if (output < 0) {
                    System.out.println("Input can not be negative");
                    continue;
                }
                if (output == 0) {
                    System.out.println("Input can not be 0");
                    continue;
                }
                //user enter a real number
                if ((int) output != output) {
                    System.out.println("Input can not be a real number");
                } //if not return int value 
                else {
                    return (int) output;
                }
            } //user enter a string
            catch (NumberFormatException StringInput) {
                System.out.println("Input can not be a string");
            }
        } while (true);
    }

    public static float getMatrixValue(String msg) {
        float output;
        //loop until user enter a positive decimal in range of input

        //loop until user enter a number
        do {
            System.out.print(msg);
            Scanner sc = new Scanner(System.in);
            String input = sc.nextLine().trim();
            //user enter nothing or whitespace
            if (input.isEmpty()) {
                System.out.println("Input can not be empty");
                continue;
            }
            try {
                output = Float.parseFloat(input);
                if ((float) output == (int) output) {
                    return (int) output;
                }
                break;
            } //user enter a string
            catch (NumberFormatException StringInput) {
                System.out.println("Values of matrix is digit");
            }
        } while (true);
        return output;
    }
}
