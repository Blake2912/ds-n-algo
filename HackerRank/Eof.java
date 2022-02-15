import java.util.Scanner;

/*
https://www.hackerrank.com/challenges/java-end-of-file/problem?h_r=next-challenge&h_r=next-challenge&h_v=zen&h_v=zen&isFullScreen=false&h_r=next-challenge&h_v=zen
Problem link
*/

public class Eof{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i=0;
        while(sc.hasNext()){
            i++;
            System.out.print(i + sc.next());
        }
        System.out.println();
        sc.close();
    }
}