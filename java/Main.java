/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Contact;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class Main {

    public static void main(String[] args) {
        ContactList c1 = new ContactList();
        int choose = 10;
        Scanner sc = new Scanner(System.in);

        System.out.println("0 - Exit");
        System.out.println("1 - Show contact");
        System.out.println("2 - Add contact");
        System.out.println("3 - Update contact");
        System.out.println("4 - Remove");
        System.out.println("5 - Query");
        System.out.println("6 - Print available actions");
        while (choose != 0) {
            System.out.println("Select:");
            choose = sc.nextInt();

            switch (choose) {
                case 0:
                    System.exit(0);
                case 1:
                    c1.display();
                    break;
                case 2:
                    System.out.println("Enter name and phone number.");
                    c1.addcontact(sc.next(), sc.next());
                    break;
                case 3:
                    System.out.println("Enter ID and new name.");
                    c1.update(sc.nextInt(), sc.next(), sc.next());
                    break;
                case 4:
                    System.out.println("");
                    c1.removecontact(sc.nextInt());
                    break;
                case 5:
                    c1.findContact(sc.next());
                    break;
                case 6:
                    System.out.println("0 - Exit");
                    System.out.println("1 - Show contact");
                    System.out.println("2 - Add contact");
                    System.out.println("3 - Update contact");
                    System.out.println("4 - Remove");
                    System.out.println("5 - Find");
                    System.out.println("6 - Print available actions");
                    break;
                default:
            }
        }
    }
}
