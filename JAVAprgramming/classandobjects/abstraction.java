abstract class Animal{
    Animal(){
        System.out.println("parent class contructor is called....");
    }
    abstract void walk();
}
class Horse extends Animal{
    Horse(){
        System.out.println("Horse contructor is called...");
    }
    public void walk(){
        System.out.println("Horse walks on 4 legs...");
    }
}

public class abstraction {
    public static void main(String[] args) {
        Horse h = new Horse();
        h.walk();
    }
}
