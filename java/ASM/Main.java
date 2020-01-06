/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ASM;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class Main {
    public static void main(String[] args) {
        int choose=10;
        MenuList m = new MenuList();
        Scanner sc = new Scanner(System.in);
        
        System.out.println("0: Quit");
        System.out.println("1: Check your bill");
        System.out.println("2: Order foods");
        System.out.println("3: Detele from order list");
        while(choose != 0){
            System.out.println("Select:");
            choose = sc.nextInt();
            switch(choose){
                case 0:
                    System.exit(0);
                    break;
                case 1:
                    m.printOrder();
                    break;
                case 2:
                    m.checkMenu();
                    break;
                case 3:
                    m.removeOrder();
                    break;
                    default:
                        System.out.println("Error, select again!");
            }
        }
    }
}
