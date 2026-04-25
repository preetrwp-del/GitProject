import java.util.Scanner;
class Student{ //PARENT CLASS
    String name;
    int rollNo;
    void inputStudent(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Name : ");
        name = sc.nextLine();
        System.out.print("Enter the RollNo : ");
        rollNo = sc.nextInt();
    }
}
class Marks extends Student{ // CHILD CLASS INHERITING PARENT CLASS
    int m1,m2,m3;
    void inputMarks(){
    Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Marks of 1st Subject : ");
        m1 = sc.nextInt();
        System.out.print("Enter the Marks of 1st Subject : ");
        m2 = sc.nextInt();
        System.out.print("Enter the Marks of 1st Subject : ");
        m3 = sc.nextInt();
    }
}
class Results extends Marks{ // GRAND CHILD INHERTING CHILDS PROPERTY
    void display(){
        int total = m1+m2+m3;
        float percentage = total/3f;
        System.out.println("\n-----RESULT-----");
        System.out.println("Name of the students : " + name) ;
        System.out.println("Roll number : " + rollNo);
        System.out.println("Total marks obtained : " + total);
        System.out.println("Percentage Scored : " + percentage + "%");
    }
}
public class multilevelInheritance {
    public static void main(String[] args) {
        Results smr = new Results();
        smr.inputStudent();
        smr.inputMarks();
        smr.display();

    }
}
