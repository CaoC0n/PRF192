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
public class Item {
    
    Validation validation = new Validation();
    
    protected int value;
    protected String creator;

    public Item() {
    }

    public Item(int value, String creator) {
        this.value = value;
        this.creator = creator;
    }

    public int getValue() {
        return value;
    }

    public void setValue(int value) {
        this.value = value;
    }

    public String getCreator() {
        return creator;
    }

    public void setCreator(String creator) {
        this.creator = creator;
    }
    
    public void output() {
        System.out.println("Value: " + value);
        System.out.println("Creator: " + creator);
    }
    
    public void input() {
        int valueItem = validation.getInput("Enter value: ");
        this.setValue(valueItem);
        String creatorItem = validation.getString("Enter creator: ", "^[A-Za-z0-9 ]+$");
        this.setCreator(creatorItem);
    }
}
