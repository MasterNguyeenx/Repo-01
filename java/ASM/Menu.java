/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ASM;

/**
 *
 * @author Admin
 */
public class Menu {
    String foods;
    int amount;
    int price;
    int sum;
    
    public Menu(String foods, int amount, int price, int sum) {
        this.foods = foods;
        this.amount = amount;
        this.price = price;
        this.sum = sum;
    }
    
    public Menu(String foods, int amount, int price) {
        this.foods = foods;
        this.amount = amount;
        this.price = price;
    }
    
    public int getPrice(){
        return price;
    }
    
    public int getAmount(){
        return amount;
    }
    
    public String foods(){
        return foods;
    }
    
    public int getSum(){
        return sum;
    }
    
    public void setPrice(int price){
        this.price = price;
    }
    
    public void setAmount(int amount){
        this.amount = amount;
    }
    
    public void setFoods(String foods){
        this.foods = foods;
    }
    
    public void setSum(int sum){
        this.sum = sum;
    }
    public void foodsInfo(){
        this.sum = this.amount * this.price;
        String info = "Name: " + this.foods + " - Amount: " + this.amount + " - Price: " + this.price + " - Sum: " + this.sum ;
        System.out.println(info);
    }
}
