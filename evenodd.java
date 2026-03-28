package If_Else;
import java.util.Scanner;

public class evenodd {
    static void main() {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a number : ");
        int n = sc.nextInt();
        if(n%2==0){
            System.out.println("The number you entered is even");
        }
        else{
            System.out.println("The number you entered is odd");
        }
    }
}

