class Bank{
    public String name;
    protected String email;
    private String password;
    //getter and setter
    public String getPasword(){
        return this.password;
    }
    public void setPassword(String pass){
        this.password =  pass;
    }
}
public class BankDetails {
    public static void main(String[] args) {
        Bank b= new Bank();
        b.name= "JashanRandhawa";
        b.email= "ijk_0905@gmail.com";
        System.out.println(b.name);
        System.out.println(b.email);
        b.setPassword("abcde");
        System.out.println(b.getPasword());
    }
}
