import java.util.Scanner;
class Shape{
    void area(){
        System.out.println("calculating the area....");
    }
}
class Triangle{
    float base,height;
    void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enetr the value for Base : ");
        base = sc.nextInt();
        System.out.println("Enetr the value for Height : ");
        height = sc.nextInt();
    }
    void area(){ //base(parent) class function is overriden by sub(child) class
        double Area = 0.5 * base * height;
        System.out.println("Area of Triangle is :"+ Area);
    }
}
class circle{
    float radius;
    void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enetr the value for Radius : ");
        radius = sc.nextInt();
    }
    void area(){
        double Area = 3.14 * radius * radius;
        System.out.println("Area of circle is :"+ Area);
    }
}

public class HierarchicalInheritance {
    public static void main(String[] args) {
        Triangle t = new Triangle();
        System.out.println("-----TRIANGLE-----");
        t.input();
        t.area();
        circle c = new circle();
        System.out.println("-----CIRCLE-----");
        c.input();
        c.area();
    }
}
