/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fruitshop;

import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import java.util.Map;

public class FruitShop {

    public static void main(String[] args) {
        FruitList f1 = new FruitList("source");
        while (true) {
            displayMenu();
            int option = Validation.getInt("Enter your option: ", "Option [1-5]", 1, 5, null);
            switch (option) {
                case 1:
                    createFruit(f1, null);
                    break;
                case 2:
                    updateFruit(f1);
                    break;
                case 3:
                    viewOrders(f1);
                    break;
                case 4:
                    shopping(f1);
                    break;
                case 5:
                    break;
            }
        }
    }

    private static void displayMenu() {
        System.out.println("FRUIT SHOP SYSTEM\n" + "1. Create Fruit\n" + "2. Update Fruit\n" + "3. View orders\n"
                + "4. Shopping (for buyer)\n" + "5. Exit");
    }

    private static void display(List<Fruit> listFruits) {
        System.out.println("| ++ Item ++ | ++ Fruit Name ++ | ++ Origin ++ | ++ Price ++ |  ");
        for (int i = 0; i < listFruits.size(); i++) {
            System.out.format("%-7s%-17s%-13s%-17s%-17s\n", "", i + 1, listFruits.get(i).getName(),
                    listFruits.get(i).getOrigin(),
                    listFruits.get(i).getPrice());
        }
    }

    private static void displayOrder(List<Fruit> order) {
        System.out.println("Product | Quantity | Price | Amount");
        Double totalAmount = 0.0;
        for (Fruit fruit : order) {
            double amount = fruit.getQuantity() * fruit.getPrice();
            System.out.println(fruit.getName() + "\t\t" + fruit.getQuantity() + "\t" + fruit.getPrice() + "\t" + amount);
            totalAmount += amount;
        }
        System.out.println("Total: " + totalAmount + "$");
    }

    private static void createFruit(FruitList f, Integer id) {
        FruitList temp = new FruitList("temp");
        Fruit newFruit = new Fruit();
        if (id == null) {
            do {
                id = Validation.getInt("Enter ID: ", "ID invalid", 1, Integer.MAX_VALUE, null);
            } while (f.findFruitById(id) != null);
        }
        String name = Validation.getString("Enter name: ", "Name invalid", "^[a-zA-Z ]+$", null);
        Double price = Validation.getDouble("Enter price: ", "Price invalid", 0, Double.MAX_VALUE, null);
        Integer quantity = Validation.getInt("Enter quantity: ", "Quantity invalid", 1, Integer.MAX_VALUE, null);
        String origin = Validation.getString("Enter origin: ", "Origin invalid", "^[a-zA-Z ]+$", null);
        newFruit = new Fruit(id, name, price, quantity, origin);
        try {
            temp.addFruit(newFruit);
            String yn = Validation.getString("Do you want to continue? (Y/N)", "Please enter y/n", "^[yYnN]$", null);
            if (yn.equalsIgnoreCase("y")) {
                f.addFruit(newFruit);
                System.out.println("Add fruit successful!");
            } else {
                List<Fruit> listTempFruits = temp.getAllFruits();
                display(listTempFruits);
            }
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    private static void shopping(FruitList f) {
        List<Fruit> order = new ArrayList<>();
        while (true) {
            List<Fruit> listFruits = f.getAllFruits();
            display(listFruits);
            Integer item = Validation.getInt("Enter item: ", "Items not found!", 1, listFruits.size(), null);
            if (listFruits.get(item - 1) != null) {
                System.out.println("You selected: " + listFruits.get(item - 1).getName());
                int quantity = Validation.getInt("Enter quantity: ", "quantity[1-" + listFruits.get(item - 1).getQuantity() + "]", 1,
                        listFruits.get(item - 1).getQuantity(), null);
                order.add(new Fruit(listFruits.get(item - 1).getId(), listFruits.get(item - 1).getName(), listFruits.get(item - 1).getPrice(), quantity, listFruits.get(item - 1).getOrigin()));
                listFruits.get(item - 1).setQuantity(listFruits.get(item - 1).getQuantity() - quantity);
                if (listFruits.get(item - 1).getQuantity() == 0) {
                    f.remove(item - 1);
                }
                String yn = Validation.getString("Do you want to order now (Y/N)", "Please enter y/n", "^[yYnN]$",
                        null);
                if (yn.equalsIgnoreCase("y")) {
                    break;
                }
            } else {
                System.out.println("ID not found!");
            }
        }
        displayOrder(order);
        String name = Validation.getString("Enter name: ", "Name invalid", "^[a-zA-Z ]+$", null);
        String customer = f.shopping(name, order);
        if (customer != null) {
            System.out.println("Thank you!");
        }
    }

    private static void updateFruit(FruitList f) {
        List<Fruit> listFruits = f.getAllFruits();
        display(listFruits);
        Integer id = Validation.getInt("Enter item: ", "Fruit ID not exist!", 1, Integer.MAX_VALUE, null);
        Fruit findFruit = f.findFruitById(id);
        if (findFruit != null) {
            Integer quantity = Validation.getInt("Enter quantity: ", "Quantity invalid", 1, Integer.MAX_VALUE, "nope");
            if (quantity != null) {
                findFruit.setQuantity(quantity);
            }
            System.out.println("Update fruit successful!");
        } else {
            String yn = Validation.getString("Fruit ID not found! Do you want to create? (Y/N): ", "Please enter y/n",
                    "^[yYnN]$", null);
            if (yn.equalsIgnoreCase("y")) {
                createFruit(f, id);
            }
        }
    }

    private static void viewOrders(FruitList f) {
        Hashtable<String, List<Fruit>> orders = f.getOrders();
        displayOrders(orders);
    }

    private static void displayOrders(Hashtable<String, List<Fruit>> orders) {
        for (Map.Entry<String, List<Fruit>> entry : orders.entrySet()) {
            String customer = entry.getKey();
            List<Fruit> listFruit = entry.getValue();
            System.out.println("Customer: " + customer.substring(customer.indexOf("#") + 1));
            displayOrder(listFruit);
        }
    }
}
