/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package GUI;

import DTO.*;

public class AntiqueShop {

    Menu menu = new Menu();

    public static void main(String[] args) {

        Validation validation = new Validation();
        Item item = null;

        while (true) {
            Menu.menu();
            int choice = validation.getInt("Input a choice: ", 0, 4);
            switch (choice) {
                case 1:
                    item = new Vase();
                    ((Vase) item).inputVase();
                    break;
                case 2:
                    item = new Statue();
                    ((Statue) item).inputState();
                    break;
                case 3:
                    item = new Painting();
                    ((Painting) item).inputPainting();
                    break;
                case 4:
                    if (item != null) {
                        if (item instanceof Vase) {
                            System.out.println("Vase's information:");
                            ((Vase) item).outputVase();
                        } else if (item instanceof Statue) {
                            System.out.println("Statue's information:");
                            ((Statue) item).outputStatue();
                        } else if (item instanceof Painting) {
                            System.out.println("Painting's information:");
                            ((Painting) item).outputPainting();
                        }
                    } else {
                        System.out.println("You need to create an object!");
                    }
                    break;
                case 0:
                    System.out.println("Goodbye!");
                    System.exit(0);
                    break;
            }
        }
    }
}
