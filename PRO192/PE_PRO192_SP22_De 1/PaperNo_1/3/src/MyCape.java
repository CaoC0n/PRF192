
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
public class MyCape implements ICape{

    @Override
    public int f1(List<Cape> t) {
        int sum = 0;
        int count = 0;
        for (int i = 0; i < t.size(); i++) {
            sum += t.get(i).getColor();
        }
        double avg = sum / t.size();
        for (Cape cape : t) {
            if (cape.getColor() > avg) {
                count++;
            }
        }
        return count;
    }

    @Override
    public void f2(List<Cape> t) {
        int sum = 0;
        for (int i = 0; i < t.size(); i++) {
            sum += t.get(i).getColor();
        }
        double avg = sum / t.size();
        for (int i = 0; i < t.size(); i++) {
            if (t.get(i).getColor() > avg) {
                t.remove(i);
                break;
            }
        }
    }

    @Override
    public void f3(List<Cape> t) {
       Collections.sort(t, new Comparator<Cape>() {
           @Override
           public int compare(Cape o1, Cape o2) {
               int n = o1.getTailor().length();
               int n1 = o2.getTailor().length();
               return o2.getTailor().substring(n1-1, n1).compareTo(o1.getTailor().substring(n-1, n));
           }
       });
    }
    
}
