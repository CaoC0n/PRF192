
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class MyBrick implements IBrick{

    @Override
    public int f1(List<Brick> t) {
        int count = 0;
        for (Brick brick : t) {
            if(Character.isDigit(brick.getPlace().charAt(0)) && 
                    Character.isLetter(brick.getPlace().charAt(brick.getPlace().length() - 1))) {
                count++;
            }  
        }
        return count;
    }

    @Override
    public void f2(List<Brick> t) {
        int max = Integer.MIN_VALUE;
        int pos = -1;
        for (int i = 0; i < t.size(); i++) {
            if (max < t.get(i).getPrice() && t.get(i).getPrice() % 2 != 0) {
                max = t.get(i).getPrice();
                pos = i;
            }
        }
        t.get(pos).setPlace("XX");
    }

    @Override
    public void f3(List<Brick> t) {
        int max = Integer.MIN_VALUE;
        int pos = -1;
        for (int i = 0; i < t.size(); i++) {
            if (max < t.get(i).getPrice() && t.get(i).getPrice() % 2 != 0) {
                max = t.get(i).getPrice();
                pos = i;
            }
        }
        
        Comparator<Brick> comparator = new Comparator<Brick>() {
            @Override
            public int compare(Brick o1, Brick o2) {
                return o1.getPrice() - o2.getPrice();
            }
        };
        Collections.sort(t.subList(0, pos), comparator);
    }
    
}
