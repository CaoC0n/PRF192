
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
public class MyCarp implements ICarp {

    @Override
    public int f1(List<Carp> t) {
        int count = 0;
        for (Carp carp : t) {
            if (Character.isDigit(carp.getPond().charAt(1))) {
                int number = Integer.parseInt("" + carp.getPond().charAt(1));
                if (number % 2 == 0) {
                    count++;
                }
            }
        }
        return count;
    }

    @Override
    public void f2(List<Carp> t) {
        for (int i = 0; i < t.size(); i++) {
            if (isPalindrom(t.get(i).getPond())) {
                t.get(i).setState(99);
                break;
            }
        }
    }

    @Override
    public void f3(List<Carp> t) {
        Comparator<Carp> comparator = new Comparator<Carp>() {
            @Override
            public int compare(Carp o1, Carp o2) {
                if (o1.getState() == o2.getState()) {
                    return o1.getPond().substring(1, 2).compareTo(o2.getPond().substring(1, 2));
                }
                return o1.getState() - o2.getState();
            }
        };
        Collections.sort(t.subList(0, 5), comparator);
    }

    private boolean isPalindrom(String s) {
        StringBuilder s1 = new StringBuilder(s);
        if (s1.reverse().toString().equals(s)) {
            return true;
        }
        return false;
    }

}
