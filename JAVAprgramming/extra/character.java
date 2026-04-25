import java.util.Scanner;
public class character {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter the character :");
        char ch = sc.next().charAt(2);
        System.out.print("print the character at first index :" + ch );

        sc.close();
    }
}
