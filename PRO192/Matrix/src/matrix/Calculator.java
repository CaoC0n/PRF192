/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package matrix;

/**
 *
 * @author VICTUS
 */
public class Calculator {

    public float[][] additionMatrix(float[][] matrix1, float[][] matrix2) {
        int row = matrix1.length;
        int col = matrix1[0].length;
        float[][] result = new float[row][col];
        //traverse from the first element to last element of matrix's row
        for (int i = 0; i < row; i++) {
            //traverse from the first element to last element of matrix's column
            for (int j = 0; j < col; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        return result;
    }

    public float[][] subtractionMatrix(float[][] matrix1, float[][] matrix2) {
        int row = matrix1.length;
        int col = matrix1[0].length;
        float[][] result = new float[row][col];
        //traverse from the first element to last element of matrix's row
        for (int i = 0; i < row; i++) {
            //traverse from the first element to last element of matrix's column
            for (int j = 0; j < col; j++) {
                result[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }
        return result;
    }

    public float[][] multiplicationMatrix(float[][] matrix1, float[][] matrix2) {
        int row1 = matrix1.length;
        int col1 = matrix1[0].length;
        int row2 = matrix2.length;
        int col2 = matrix2[0].length;
        float[][] result = new float[row1][col2];
        //traverse from the first element to last element of matrix1's row
        for (int i = 0; i < row1; i++) {
            //traverse from the first element to last element of matrix2's column
            for (int j = 0; j < col2; j++) {
                result[i][j] = 0;
                //traverse from the first element to last element of matrix1's column
                for (int k = 0; k < col1; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        return result;
    }
}