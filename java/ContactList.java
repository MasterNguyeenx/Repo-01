/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Contact;

import java.util.ArrayList;

/**
 *
 * @author Admin
 */
public class ContactList {
    String name;
    String number;
    
    private static ArrayList<Contact> ContactList = new ArrayList<Contact>();
    
    public void addcontact(String name, String number){
        ContactList.add(new Contact(name, number));
    }
    
    public void update(int index , String name , String number){
        ContactList.set(index-1, new Contact(name, number));
    }
    
    public void removecontact(int index){
        ContactList.remove(index-1);
    }
    
    public Contact findContact(String search){
        int position = ContactList.indexOf(search);
        if(position > 0){
            System.out.println(ContactList.get(position));
            return ContactList.get(position);
        }
        return null;
    }
    
    public void display(){
        System.out.println("You have "+ContactList.size()+" items in your list");
        for (int i = 0; i < ContactList.size(); i++) {
            System.out.println((i+1)+" - " +ContactList.get(i).getName() +" - "+ ContactList.get(i).getNumber());
        }
    }
}
