import java.util.Scanner;

/*
Hacker Rank Problem link:
https://www.hackerrank.com/challenges/java-static-initializer-block/problem
*/
public class StaticInitBlock {

    static Scanner scan = new Scanner(System.in);
    static int B = scan.nextInt();
    static int H = scan.nextInt();
    static boolean flag = true;
    static{
            try{
                if(B <= 0 || H <= 0){
                    flag = false;
                    throw new Exception("Breadth and height must be positive");
                }
            }catch(Exception e){
                System.out.println(e);
        }
    }
    public static void main(String[] args) {
        if(flag){
            System.out.println(B*H);
        }
    }
}
