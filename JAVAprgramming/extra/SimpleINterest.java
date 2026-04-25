import java.util.Scanner;
public class SimpleINterest {
        public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter the PRINCIPLE: ");
        float PRINCIPLE = sc.nextFloat();

        System.out.print("enter the RATE: ");
        float RATE = sc.nextFloat();

        System.out.print("enter the TIME: ");
        float TIME = sc.nextFloat();

        float si = (PRINCIPLE*RATE*TIME)/100;
        System.out.print("SIMPLE INTEREST: "+ si);

        sc.close();
    }
}
