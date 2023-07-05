/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Asus
 */
public class SpecCala extends Cala {

    private int color;

    public SpecCala() {
    }

    public SpecCala(String owner, int price, int color) {
        super(owner, price);
        this.color = color;
    }

    @Override
    public String toString() {
        return super.getOwner() + ", " + super.getPrice() + ", " + this.color;
    }

    public void setData() {
        int n = super.getOwner().length();
        setOwner(super.getOwner().substring(0, 2) + "XX" + super.getOwner().substring(3, n));
    }

    public int getValue() {
        if (color % 2 != 0) {
            return super.getPrice() + 7;
        }
        return super.getPrice() + 3;
    }
}
