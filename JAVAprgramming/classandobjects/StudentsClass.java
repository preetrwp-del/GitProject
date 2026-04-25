public class StudentsClass {
    //creating a new datatype 
    public static class Student{
        String name;
        int rollNo;
        double percentage;
    }
    public static void change(Student s){ 
        s.name = "SNEHA";
    }
    public static void main(String[] args) {
        Student x = new Student() ;
        x.name = "JASHAN";
        x.rollNo = 31;
        x.percentage = 93.6;
        System.out.println("name = " + x.name + "\nrollNo = "+ x.rollNo + "\npercentage = " + x.percentage);
        change(x);
       System.out.println("name = " + x.name + "\nrollNo = "+ x.rollNo + "\npercentage = " + x.percentage);
    }
}
