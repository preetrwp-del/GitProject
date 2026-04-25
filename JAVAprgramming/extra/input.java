import java.util.Scanner;

public class input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter your name: ");
        String name = sc.nextLine();
        System.out.println("name is : " + name);

        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        System.out.println("Hello " + name + ", you are " + age + " years old.");
        
        sc.close(); // Always close scanner
    }
}
