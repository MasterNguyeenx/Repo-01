/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Exam;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class BankMain {
    public static void main(String[] args) {
        Bank obj = new Bank();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your balance:");
        obj.setBalance(sc.nextDouble());
        System.out.println("Enter bank's rate:");
        obj.setRate(sc.nextDouble());
        
        System.out.println(obj.calculateInterest());
        
    }
    
    
}
