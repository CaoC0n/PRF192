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
public class Vase extends Item {

    private int height;
    private String material;

    public Vase() {
    }

    public Vase(int value, String creator, int heigt, String material) {
        super(value, creator);
        this.height = heigt;
        this.material = material;
    }

    public int getHeigt() {
        return height;
    }

    public void setHeigt(int heigt) {
        this.height = heigt;
    }

    public String getMaterial() {
        return material;
    }

    public void setMaterial(String material) {
        this.material = material;
    }

    public void outputVase() {
        output();
        System.out.println("Heigt: " + height);
        System.out.println("Material: " + material);
    }

    public void inputVase() {
        input();
        int heightVase = validation.getInput("Enter height: ");
        this.setHeigt(heightVase);
        String materialVase = validation.getString("Enter material: ", "^[A-Za-z0-9 ]+$");
        this.setMaterial(materialVase);
    }
}
