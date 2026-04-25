class Girls{
    String name;
    int age;
    Girls(){
        System.out.println("contructor is called....");
    }
    void printGirlsInfo(String name){
        System.out.println(name);
    }
    void printGirlsInfo(int age){
        System.out.println(age);
    }
    void printGirlsInfo(String name,int age){
        System.out.println(name + " " + age);
    }
}
public class overloadingFunction {
    public static void main(String[] args) {
        
        Girls g1 = new Girls();
        g1.name = "jashan";
        g1.age = 19;
        g1.printGirlsInfo(g1.name); //1st funtion is called
        g1.printGirlsInfo(g1.age); //2nd function is called 
        g1.printGirlsInfo(g1.name,g1.age); // 3rd function is called 
        /*Girls g2 = new Girls();
        g2.age = 19;
        g2.printGirlsInfo(g2.age);
        Girls g3 = new Girls();
        g3.name = "Jashan Randhawa";
        g3.age = 19;
        g3.printGirlsInfo(g3.name,g3.age);*/
    }
}
