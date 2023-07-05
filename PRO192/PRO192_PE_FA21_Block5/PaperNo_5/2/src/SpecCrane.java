/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class SpecCrane extends Crane{
    
    private int radius;

    public SpecCrane() {
    }

    public SpecCrane(String maker, int type, int radius) {
        super(maker, type);
        this.radius = radius;
    }

    @Override
    public String toString() {
        return super.toString() + ", " + radius; 
    }
    
    public void setData() {
        super.setMaker("BA" + super.getMaker());
    }
    
    public int getValue() {
        int x;
        if (radius > 10) {
            return x = super.getType() * 3;
        }
        return x = super.getType() * 2;
    }
}
