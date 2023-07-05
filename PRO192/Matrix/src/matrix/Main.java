/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package matrix;

import static java.lang.System.exit;

/**
 *
 * 
 */
public class Main {

    public static void main(String[] args) {
        Calculator calculator = new Calculator();
        ManageMatrix manager = new ManageMatrix();
        GetInput getData = new GetInput();

        //loop until user input a valid option
        while (true) {
            //Step 1: Display menu of program's funtions
            manager.displayMenu();
            //Step 2: User select an option
            int choice = getData.getMenuChoice("Your choice: ", 1, 4);
            //Step 3: Program perform function based on user's choice
            switch (choice) {
                //perform addition function
                case 1: {
                    manager.displayHeader(choice);
                    float[][] matrix1 = manager.inputMatrix1();
                    float[][] matrix2 = manager.inputMatrix2(matrix1, choice);
                    float[][] result = calculator.additionMatrix(matrix1, matrix2);
                    manager.displayResult(matrix1, matrix2, result, choice);
                    break;
                }

                //perform subtraction function    
                case 2: {
                    manager.displayHeader(choice);
                    float[][] matrix1 = manager.inputMatrix1();
                    float[][] matrix2 = manager.inputMatrix2(matrix1, choice);
                    float[][] result = calculator.subtractionMatrix(matrix1, matrix2);
                    manager.displayResult(matrix1, matrix2, result, choice);
                    break;
                }
                //perform multiplication funtion
                case 3: {
                    manager.displayHeader(choice);
                    float[][] matrix1 = manager.inputMatrix1();
                    float[][] matrix2 = manager.inputMatrix2(matrix1, choice);
                    float[][] result = calculator.multiplicationMatrix(matrix1, matrix2);
                    manager.displayResult(matrix1, matrix2, result, choice);
                    break;
                }
                //terminate the program
                case 4:
                    exit(0);
                    break;
            }
        }
    }
}