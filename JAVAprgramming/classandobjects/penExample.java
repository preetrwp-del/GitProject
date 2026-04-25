class pen{
        String color ;
        String type ;
        pen(){//default keyword
            this("null","null");//this keyword while calling another constructor
            System.out.println("1. contructor is called");
        }
        pen(String color, String type){// parameterised contructor
            this.color= color; //this keyword reffering to the attribute of the class pen 1.color=attribute of the class 2.color=parameter passed in the contructor
            this.type= type;
        }
        void display(){ //function 
            System.out.println(" color = " + color + " , type = " + type );
            System.out.println("helps in writing on paper.....");
        }
        void printColour(){
            System.out.println(this.color);//with help of (this) keyword this function will get to know that which object it is being called by
        }
}
public class penExample {
    public static void main(String[] args) {
        pen p1 = new pen();
        p1.display();
        pen p2 = new pen("black","ball");
        p2.display();
        p1.printColour();
        p2.printColour();
    }
}
