/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class SpecBrick extends Brick{
    
    private int color;

    public SpecBrick() {
    }

    public SpecBrick(String place, int price, int color) {
        super(place, price);
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
        return super.toString() + "," + color;
    }
    
    public void setData() {
        super.setPlace(super.getPlace().substring(0, 2) + "BCA" + super.getPlace().substring(2));
    }
    
    public int getValue() {
        if (color > 7) {
            return super.getPrice() + 9;
        }
        return super.getPrice() + 6;
    }
}
