
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
 * @author Asus
 */
public class MyCala implements ICala {

    @Override
    public int f1(List<Cala> t) {
        int count = 0;
        for (int i = 0; i < t.size(); i++) {
            if (Character.isLetter(t.get(i).getOwner().charAt(1))) {
                count++;
            }
        }
        return count;
    }

    @Override
    public void f2(List<Cala> t) {
        int min = Integer.MAX_VALUE;
        int count = 0;
        for (int i = 0; i < t.size(); i++) {
            if (t.get(i).getPrice() < min) {
                min = t.get(i).getPrice();
            }
        }
        for (int i = 0; i < t.size(); i++) {
            if (t.get(i).getPrice() == min) {
                count++;
            }
            if (count == 2) {
                t.remove(i);
                break;
            }
        }
    }

    @Override
    public void f3(List<Cala> t) {
        Comparator<Cala> comparator = new Comparator<Cala>() {
            @Override
            public int compare(Cala o1, Cala o2) {
                int n1 = o1.getOwner().length();
                int n2 = o2.getOwner().length();
                return o2.getOwner().substring(n2 - 1, n2).compareTo(o1.getOwner().substring(n1 - 1, n1));
            }
        };
        Collections.sort(t, comparator);

    }
}
