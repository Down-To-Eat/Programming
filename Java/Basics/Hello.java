import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter two numbers: ");

        if (!sc.hasNextInt()) {
            System.out.println("Invalid input!");
            sc.close();
            return;
        }

        int num1 = sc.nextInt();

        if (!sc.hasNextInt()) {
            System.out.println("Invalid input!");
            sc.close();
            return;
        }

        int num2 = sc.nextInt();

        System.out.println("\nSum: " + (num1 + num2));
        System.out.println("Difference: " + (num1 - num2));
        System.out.println("Product: " + (num1 * num2));

        if (num2 != 0) {
            System.out.println("Quotient: " + (num1 / num2));
            System.out.println("Remainder: " + (num1 % num2));
        } else {
            System.out.println("Division and remainder are not possible with zero.");
        }

        sc.close();
    }
}
