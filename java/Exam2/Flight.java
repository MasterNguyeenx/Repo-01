/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Exam2;

/**
 *
 * @author Admin
 */
public class Flight {
    
    private int number = 0;
    private String destination = "";

    public String getDestination() {
        return destination;
    }

    public void setDestination(String destination) {
        this.destination = destination;
    }


    public int getNumber() {
        return number;
    }

    public void setNumber(int number) {
        this.number = number;
    }

    public Flight(int number, String destination) {
        this.number = number;
        this.destination = destination;
    }
    
    public void display(){
        System.out.println(+ number +", "+ destination);
    }
}
