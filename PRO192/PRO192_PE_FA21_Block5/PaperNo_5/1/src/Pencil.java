/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class Pencil {
    
    private String owner;
    private int color;

    public Pencil() {
    }

    public Pencil(String owner, int color) {
        this.owner = owner;
        this.color = color;
    }

    public String getOwner() {
        return owner.toLowerCase();
    }

    public void setOwner(String owner) {
        this.owner = owner;
    }

    public int getColor() {
        return color;
    }

    public void setColor(int color) {
        this.color = color;
    }
    
    
}
