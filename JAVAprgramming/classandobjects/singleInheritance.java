import java.util.Scanner;
class Shape{
    void area(){  
        System.out.println("Calculating the area :");
    }
}
class Rectangle extends Shape{
    int l,b;
    //Rectangle(int lenth, int brth){
     //   l=lenth;
     //   b=brth;
    //}
    void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER THE LENGTH: ");
        l = sc.nextInt();
        System.out.println("ENTER THE BREADTH: ");
        b = sc.nextInt();
    }
    void calculateArea(){
        int area = l*b;
        System.out.println("area of rectangle: " + area);
    }
}
public class singleInheritance {
    public static void main(String[] args) {
      Rectangle rc = new Rectangle() ;
       rc.area();
       rc.input();
       rc.calculateArea();

    }
}
