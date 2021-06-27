import java.util.Scanner;
public class trial{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Hello world this is ma first java on mac");
        System.out.println("Input your index number");
        int name= input.nextInt();
        System.out.println("input your name");
        String lname = input.next();
        System.out.println("your name is "+lname);
        while (name !=10869096){
            System.out.println("Invalid input try again");
            name = input.nextInt();
        }
        if(name == 10869096){
            String student = "Ebenezer Domey";
            System.out.println("Hey "+student+" pleasure to meet you");
        }
        input.close();
    }
}