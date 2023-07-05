/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package matrix;

/**
 *
 * @author Admin
 */
public class ManageMatrix {
     public void displayMenu() {
        System.out.println("=======Calculator program=======");
        System.out.println("1. Addition Matrix");
        System.out.println("2. Subtraction Matrix");
        System.out.println("3. Multiplication Matrix");
        System.out.println("4. Quit");
    }

    public float[][] inputMatrix1() {
        int row1 = GetInput.getInt("Enter Row Matrix 1: ");
        int col1 = GetInput.getInt("Enter Column Matrix 1: ");

        float[][] matrix1 = new float[row1][col1];
        //user enter from first to last element of a row of the matrix
        for (int i = 0; i < row1; i++) {
            //user enter from first to last element of a column of the martix
            for (int j = 0; j < col1; j++) {
                matrix1[i][j] = GetInput.getMatrixValue(
                        "Enter Matrix1[" + (i + 1) + "][" + (j + 1) + "]:");
            }
        }
        return matrix1;
    }

    public float[][] inputMatrix2(float[][] matrix1, int choice) {
        int row1 = matrix1.length;
        int col1 = matrix1[0].length;
        int row2;
        int col2;

        /*if user choose multiplication funtion, force user to enter matrix2's rows
        equals to matrix 1 columns
         */
        if (choice == 3) {
            //loop until user enter row2 equal to col1
            while (true) {
                row2 = GetInput.getInt("Enter Row Matrix 2: ");
                /*check the number of row in matrix 2 is equal to number of column
                in matrix 1
                 */
                if (row2 != col1) {
                    System.out.println("Rows of Matrix2"
                            + "must equals to Columns of Matrix 1");
                    continue;
                }
                col2 = GetInput.getInt("Enter Column Matrix 2: ");
                break;
            }
        } /*if user choose addition or subtraction funtion,
        force user to enter matrix2's rows equals to matrix 1 rows
        AND matrix2's columns equals to matrix1's columns
         */
        else {
            //force user to enter matrix2's rows equals to matrix 1 rows
            while (true) {
                row2 = GetInput.getInt("Enter Row Matrix 2: ");
                if (row2 != row1) {
                    System.out.println("Rows of Matrix2 must equals to Matrix 1");
                    continue;
                }
                break;
            }
            //force user to enter matrix2's columns equals to matrix 1 columns
            while (true) {
                col2 = GetInput.getInt("Enter Columns Matrix 2: ");
                if (col2 != col1) {
                    System.out.println("Columns of Matrix2 must equal to Matrix1");
                    continue;
                }
                break;
            }
        }
        float[][] matrix2 = new float[row2][col2];
        //user enter from first to last element of a row of the matrix
        for (int i = 0; i < row2; i++) {
            //user enter from first to last element of a column of the martix
            for (int j = 0; j < col2; j++) {
                matrix2[i][j] = GetInput.getMatrixValue(
                        "Enter Matrix2[" + (i + 1) + "][" + (j + 1) + "]:");
            }
        }
        return matrix2;
    }
    
    public void displayMatrix(float[][] matrix) {
        int row = matrix.length;
        int col = matrix[0].length;
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print("[" + matrix[i][j] + "]");
            }
            System.out.println("");
        }
    }
    
    public void displayResult(float[][] matrix1, float[][] matrix2,
            float[][] result, int choice) {
        System.out.println("-------Result-------");
        displayMatrix(matrix1);
        switch (choice) {
            case 1:
                System.out.println("+");
                break;
            case 2:
                System.out.println("-");
                break;
            case 3:
                System.out.println("*");
                break;
        }
        displayMatrix(matrix2);
        System.out.println("=");
        displayMatrix(result);
    }
    
    public void displayHeader(int choice) {
        switch (choice) {
            case 1:
                System.out.println("--------Addition--------");
                break;
            case 2:
                System.out.println("-------Subtraction-------");
                break;
            case 3:
                System.out.println("------Multiplication------");
                break;
        }
    }
}
