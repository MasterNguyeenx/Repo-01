/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Exam;

/**
 *
 * @author Admin
 */
public class Bank {
    
    private double balance;
    private double rate;

    public double getRate() {
        return rate;
    }

    public void setRate(double rate) {
        this.rate = rate;
    }


    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public Bank() {
    }
    
    public double calculateInterest(){
        return getBalance() * (this.rate / 1200);
    }

    public Bank(double balance, double rate) {
        this.balance = balance;
        this.rate = rate;
    }
    
}
