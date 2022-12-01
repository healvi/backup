package operator;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class Logic {
    public static void main(String[] args) {
        // for (int i = 1; i <= 10; i++) {
        // System.out.println("Angka : " + i);
        // }
        Set<String> planets = new HashSet<>();
        planets.add("mercury"); // method add() untuk menambahkan objek ke Set
        planets.add("venus");
        planets.add("earth");
        planets.add("earth"); // menambahkan objek "earth" beberapa kali
        planets.add("earth");
        planets.add("mars"); // objek bisa terus ditambahkan ke Set

        // method size() untuk mendapatkan ukuran Set
        System.out.println("Set planets awal: (size = " + planets.size() + ")");

        planets.remove("venus"); // method remove() untuk mengeluarkan objek dari Set
        for (String planet : planets) {
            System.out.println("\t " + planet);
        }

        // System.out.println("Set planets akhir: (size = " + planets.size() + ")");
        // for (Iterator iterator = planets.iterator(); iterator.hasNext();) {
        // // looping menggunakan Iterator
        // System.out.println("\t " + iterator.next());
        // }
    }
}
