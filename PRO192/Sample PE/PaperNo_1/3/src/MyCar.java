
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
public class MyCar implements ICar {

    @Override
    public int f1(List<Car> t) {
        double sum = 0;
        int count = 0;
        for (int i = 0; i < t.size(); i++) {
            sum += t.get(i).getRate();
            count++;
        }
        return (int) sum / count;
    }

    @Override
    public void f2(List<Car> t) {
        int posMin = getValueMin(t);
        int posMax = getValueMax(t);
        Collections.swap(t, posMin, posMax);
    }

    @Override
    public void f3(List<Car> t) {
        Comparator<Car> comparator = new Comparator<Car>() {
            @Override
            public int compare(Car o1, Car o2) {
                int alphabe = o1.getMaker().compareTo(o2.getMaker());
                if (alphabe == 0) {
                    if (o1.getRate() > o2.getRate()) {
                        return -1;
                    } else if (o1.getRate() == o2.getRate()) {
                        return 0;
                    } else {
                        return 1;
                    }
                }
                return alphabe;
            }
        };
        Collections.sort(t, comparator);

    }

    private int getValueMin(List<Car> t) {
        int min = Integer.MAX_VALUE;
        int posMin = -1;
        for (int i = 0; i < t.size(); i++) {
            if (t.get(i).getRate() < min) {
                min = t.get(i).getRate();
                posMin = i;
            }
        }
        return posMin;
    }

    private int getValueMax(List<Car> t) {
        int max = Integer.MIN_VALUE;
        int posMax = -1;
        for (int i = 0; i < t.size(); i++) {
            if (max < t.get(i).getRate()) {
                max = t.get(i).getRate();
                posMax = i;
            }
        }
        return posMax;
    }

}
