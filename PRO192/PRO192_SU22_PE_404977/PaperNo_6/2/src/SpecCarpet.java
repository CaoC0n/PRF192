/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class SpecCarpet extends Carpet{
    
    private int color;

    public SpecCarpet() {
    }

    public SpecCarpet(String maker, int size, int color) {
        super(maker, size);
        this.color = color;
    }

    public int getColor() {
        return color;
    }

    public void setColor(int color) {
        this.color = color;
    }

    @Override
    public String toString() {
        return super.toString() + ", " + color; 
    }
    
    public void setData() {
        super.setMaker(super.getMaker().substring(0, 2) + "HOA" + super.getMaker().substring(4));
    } 
    
    public int getValue() {
        if (super.getSize() < 6) {
            return color + 5;
        }
        return color + 7;
    }
    
}
