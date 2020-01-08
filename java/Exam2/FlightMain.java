/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Exam2;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class FlightMain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Flight f1 = new Flight(857 , "Toronto");
        f1.display();
    }
}
