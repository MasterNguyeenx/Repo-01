/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ASM;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class MenuList {
    ArrayList<Menu> menuList = new ArrayList<Menu>();
    Scanner sc = new Scanner(System.in);
    
    public void printOrder(){
        for (int i = 0; i < menuList.size(); i++) {
            Menu menu = menuList.get(i);
            System.out.println("You have "+ menuList.size() +" items in your list.");
            menu.foodsInfo();
            System.out.println("-------------");
        }
    }
    
    public void checkMenu(){
        int count = 0;
        System.out.println("Enter food name :");
        String foodsName = sc.next();
        for (int i = 0; i < this.menuList.size(); i++) {
            Menu menu = menuList.get(i);
            if(menu.foods().equals(foodsName)){
                this.Counting(foodsName);
                count ++;
                System.out.println("add amount for "+foodsName);
            }
        }if(count == 0){
            this.addOrders(foodsName);
            System.out.println("Complete!");
        }
    }
    
    public void addOrders(String foodsName){
        System.out.println("Enter amount:");
        int amount = sc.nextInt();
        System.out.println("Enter price:");
        int price = sc.nextInt();
        
        Menu menu = new Menu(foodsName, amount, price);
        menuList.add(menu);
    }
    
    public void Counting(String foodsName){
        for (int i = 0; i < menuList.size(); i++) {
            Menu menu = menuList.get(i);
            if(menu.foods().equals(foodsName)){
                menu.setAmount(menu.getAmount() + 1);
                menuList.set(i, menu);
            }
        }
    }
    
    public void removeOrder(){
        System.out.println("Enter food's name:");
        String foodsName = sc.next();
        for (int i = 0; i < menuList.size(); i++) {
            Menu menu = menuList.get(i);
            if(menu.foods().equals(foodsName)){
                menuList.remove(i);
                System.out.println(foodsName + " was deleted.");
            }else{
                System.out.println(foodsName + " not found.");
            }
        }
    }
}
