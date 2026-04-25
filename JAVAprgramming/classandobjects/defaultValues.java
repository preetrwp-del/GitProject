
public class defaultValues {
    public static class Student{
        String name;
        int rollNo;
        double percentage;
    }
public static void main(String[] args) {
        Student x = new Student() ;
        System.out.println("name = " + x.name + "\nrollNo = "+ x.rollNo + "\npercentage = " + x.percentage);
    
}
}