package files;
import java.util.Scanner;
public class simpleInterest {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       System.out.println("enter the PRINCIPLE ");
       float p = sc.nextFloat();
       System.out.println("enter the RATE ");
       float r = sc.nextFloat();
       System.out.println("enter the TIME ");
       float t = sc.nextFloat();
       float s = (r*t*p)/100;
        System.out.print("simple interest is  "+ s);
    }
}
