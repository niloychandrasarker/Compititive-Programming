//package NewPackage;
import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int result=1;
        while(n!=0)
        {
            result*=n;
            n--;
        }
        System.out.println(result);
    }
}
