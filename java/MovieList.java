/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Array;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class MovieList {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<String> Movies = new ArrayList<>();
        int choose = 0;
        String MvName;
        String MvRemove;
        int slot[];

        System.out.println("-----------------");
        System.out.println("1: Add new movie.");
        System.out.println("2: Show list movies");
        System.out.println("3: Rename for a movie from list");
        System.out.println("4: Remove a movie");
        System.out.println("5: Find a movie");
        System.out.println("6: Quit");
        while (choose != 6) {
            System.out.println("What do you want?");
            choose = sc.nextInt();
            switch (choose) {
                case 1:
                    System.out.println("Enter movie's name:");
                    Movies.add(sc.next());
                    System.out.println("Success");
                    System.out.println("-----------------");
                    break;
                case 2:
                    System.out.println(Movies);
                    break;
                case 3:
                    System.out.println("Enter movie's name you want to rename");
                    Movies.remove(sc.next());
                    System.out.println("Rename to:");
                    Movies.add(sc.next());
                    System.out.println("Success");
                    System.out.println("-----------------");
                    break;
                case 4:
                    System.out.println("Enter movie's name you want to remove");
                    Movies.remove(sc.next());
                    System.out.println("Success");
                    System.out.println("-----------------");
                    break;
                case 5:
                    System.out.println("Error!\nReturn to main menu");
                    System.out.println("-----------------");
                    break;
                case 6:
                    System.exit(0);
                default:
                    System.out.println("What do you want?");
            }
        }
    }
}
