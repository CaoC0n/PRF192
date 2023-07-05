
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
public class MyCala implements ICala {

    @Override
    public int f1(List<Cala> t) {
        int count = 0;
        for (Cala cala : t) {
            if ("123456789".contains(cala.getOwner().substring(1, 2))) {
                count++;
            }
        }
        return count;
    }

    @Override
    public void f2(List<Cala> t) {
        int max = 0;
        int index = 0;
        for (int i = 0; i < t.size(); i++) {
            if (max < t.get(i).getPrice()) {
                max = t.get(i).getPrice();
                index = i;
            }
        }
        for (int i = index + 1; i < t.size(); i++) {
            if (max == t.get(i).getPrice()) {
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
                return o1.getOwner().substring(1, 2).compareTo(o2.getOwner().substring(1, 2));
            }
        };
        Collections.sort(t, comparator);
    }

}
