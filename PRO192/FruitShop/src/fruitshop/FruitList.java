/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fruitshop;

import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;

public class FruitList {

    private List<Fruit> listFruits;
    private Hashtable<String, List<Fruit>> orders;

    public FruitList(String s) {
        listFruits = new ArrayList<>();
        orders = new Hashtable<>();
        if (s.equalsIgnoreCase("source")) {
            listFruits.add(new Fruit(1, "Coconut", 2d, 10, "Vietnam"));
            listFruits.add(new Fruit(2, "Orange", 3d, 5, "US"));
            listFruits.add(new Fruit(3, "Apple", 4d, 4, "Thailand"));
            listFruits.add(new Fruit(4, "Grape", 6d, 7, "France"));
        }
    }

    public List<Fruit> getAllFruits() {
        return listFruits;
    }

    public void addFruit(Fruit newFruit) throws Exception {
        listFruits.add(newFruit);
    }

    public String shopping(String name, List<Fruit> order) {
        name = orders.size() + "#" + name;
        orders.put(name, order);
        return name;
    }

    public Fruit findFruitById(Integer id) {
        for (Fruit fruit : listFruits) {
            if (fruit.getId().equals(id)) { 
                return fruit;
            }
        }
        return null;
    }

    public void remove(int id) {
        for (int i = 0; i < listFruits.size(); i++) {
            Fruit fruit = listFruits.get(i);
            if (fruit.getId() == id) {
                listFruits.remove(i);
                break;
            }
        }
    }

    public Hashtable<String, List<Fruit>> getOrders() {
        return orders;
    }
}
