interface Animal{
      int eye =2;
      void walk();
}
interface herbivorse {
    void eat();
}
class Ghorda implements Animal,herbivorse{
    public void walk(){
        System.out.println("walks on 4 legs");
    }
    public void eat(){
        System.out.println("eats only plants");
    }
}
public class interfaceAbstraction {
    public static void main(String[] args) {
      Ghorda g = new Ghorda();
      g.walk();
      g.eat();
    }    
}
