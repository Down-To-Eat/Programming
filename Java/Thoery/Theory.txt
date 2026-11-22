int age;                     // declaration: a type and a name
age = 19;                    // assignment: give it a value
int marks = 87;              // declaration with initialisation
final double PI = 3.14159;   // final: a constant, it cannot change
public class Student {
    static int count = 0;              // static: one copy for the class
    String name;                       // instance: one per object
    void study() { int hours = 2; }    // local: lives only inside study()
}
public class main {
	static int age 19;
	p.sum(string[]args)
	s.output(main);
var count = 10;        // int
var name = "Asha";     // String
var price = 99.5;      // double
var x;                 // error: no value, so no type
primitive data types :- (byte, short, int, long) whole number, (float, double) decimal, (char) string, (Boolean) true or false
non primitive data types :- arrays, classes and interfaces
System.out.print("A");                           // no new line
System.out.println("B");                         // new line after
System.out.printf("%s is %d years old%n", "Asha", 19);
import java.util.Scanner;               // at the top of the file
Scanner sc = new Scanner(System.in);    // once, inside main
int age = sc.nextInt();         // a whole number
double cgpa = sc.nextDouble();  // a decimal number
String city = sc.next();        // one word, up to a space
String name = sc.nextLine();    // the rest of the line
