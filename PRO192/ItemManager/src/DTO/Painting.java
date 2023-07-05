/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DTO;

/**
 *
 * @author Admin
 */
public class Painting extends Item {

    private int height;
    private int width;
    private boolean isWaterColour;
    private boolean isFramed;

    public Painting() {
    }

    public Painting(int value, String creator, int height, int width, boolean isWaterColour, boolean isFramed) {
        super(value, creator);
        this.height = height;
        this.width = width;
        this.isWaterColour = isWaterColour;
        this.isFramed = isFramed;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getWidth() {
        return width;
    }

    public void setWidth(int width) {
        this.width = width;
    }

    public boolean isIsWaterColour() {
        return isWaterColour;
    }

    public void setIsWaterColour(boolean isWaterColour) {
        this.isWaterColour = isWaterColour;
    }

    public boolean isIsFramed() {
        return isFramed;
    }

    public void setIsFramed(boolean isFramed) {
        this.isFramed = isFramed;
    }

    public void outputPainting() {
        output();
        System.out.println("Height: " + height);
        System.out.println("Width: " + width);
        System.out.println("isWaterColour: " + isWaterColour);
        System.out.println("isFramed: " + isFramed);
    }

    public void inputPainting() {
        input();
        int heightPainting = validation.getInput("Enter height: ");
        this.setHeight(heightPainting);
        int widthPainting = validation.getInput("Enter width: ");
        this.setWidth(widthPainting);
        boolean isWaterColourPainting = validation.checkBoolean("Enter isWatercolour (1-true, 0-false): ", 0, 1);
        this.setIsWaterColour(isWaterColourPainting);
        boolean isFramedPainting = validation.checkBoolean("Enter isFramed (1-true, 0-false): ", 0, 1);
        this.setIsFramed(isFramedPainting);
    }
}
