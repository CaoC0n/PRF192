
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
public class MyCrane implements ICrane {

    @Override
    public int f1(List<Crane> list) {
        int count = 0;
        for (int i = 0; i < list.size() - 1; i++) {
            if (list.get(i).getPrice() <= list.get(i + 1).getPrice()) {
                count++;
            }
        }
        return count;
    }

    @Override
    public void f2(List<Crane> list) {
        int pos = firstIndex(list);
        for (int i = pos; i < list.size(); i++) {
            if (list.get(i).getPrice() == list.get(pos).getPrice()) {
                list.get(i).setOwner("T");
            }
        }
        list.get(pos).setOwner("T");
    }

    @Override
    public void f3(List<Crane> list) {
        Comparator<Crane> comparator = new Comparator<Crane>() {
            @Override
            public int compare(Crane o1, Crane o2) {
                if (o1.getOwner().equals(o2.getOwner())) {
                    return o1.getPrice() - o2.getPrice();
                }
                return o2.getOwner().compareTo(o1.getOwner());
            }
        };
        Collections.sort(list.subList(1, 6), comparator);
    }

    private int firstIndex(List<Crane> list) {
        for (int i = 0; i < list.size() - 1; i++) {
            for (int j = i + 1; j < list.size(); j++) {
                if (list.get(i).getPrice() == list.get(j).getPrice()) {
                    return i;
                }
            }
        }
        return -1;
    }
}
