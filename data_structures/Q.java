package data_structures;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Q{

    public static void main(String[] args) {
        Queue<Integer> queue = new LinkedList<>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value to input inside the queue:");
        for(int i=0;i<6;i++){
            queue.add(i);
        }
        System.out.println("The elements in the queue are: " + queue);
        System.out.println("The element at the top is: " + queue.peek());
        try{
            for(int i=0;i<6;i++){
                int removed = queue.remove();
                System.out.println("The element removed from the list is: " + removed);
        
                System.out.println("The elements in the queue are: " + queue);
    
                int size = queue.size();
                System.out.println("The size of the queue is: " + size);
            }
    
            int removed = queue.remove();
            System.out.println("The element removed from the list is: " + removed);
    
            System.out.println("The elements in the queue are: " + queue);

        }catch(Exception e){
            System.out.println("The queue is empty");

        }

        sc.close();
    }
}