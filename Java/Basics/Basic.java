
import java.util.Scanner;

// CLASS: Blueprint for creating Student objects
public class Basic {

    // STATIC VARIABLE: One shared copy for the entire class
    static int count = 0;

    // FINAL VARIABLE: Constant; its value cannot be changed
    static final double PI = 3.14159;

    // INSTANCE VARIABLES: Each Student object gets its own copy
    String name;
    int age;
    int marks;
    double cgpa;
    char grade;
    boolean passed;

    // CONSTRUCTOR: Initializes the instance variables
    Basic(String name, int age, int marks, double cgpa,
          char grade, boolean passed) {

        this.name = name;
        this.age = age;
        this.marks = marks;
        this.cgpa = cgpa;
        this.grade = grade;
        this.passed = passed;

        count++; // Increase shared object count
    }

    // INSTANCE METHOD: Displays student information
    void display() {

        // LOCAL VARIABLE: Exists only inside this method
        int studyHours = 2;

        System.out.println("\n----- Student Details -----");

        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Marks: " + marks);
        System.out.println("CGPA: " + cgpa);
        System.out.println("Grade: " + grade);
        System.out.println("Passed: " + passed);
        System.out.println("Study Hours: " + studyHours);
    }

    // STATIC METHOD: Belongs to the class, not an individual object
    static void showCount() {
        System.out.println("Total students: " + count);
    }

    // MAIN METHOD: Program execution starts here
    public static void main(String[] args) {

        // Scanner: Used to accept input from the keyboard
        Scanner sc = new Scanner(System.in);

        System.out.println("===== Student Information System =====");

        // DECLARATION and ASSIGNMENT
        int year;
        year = 2026;

        // DECLARATION with INITIALIZATION
        int semester = 1;

        // var: Java automatically infers the data type
        var course = "Computer Science";
        var price = 99.5;

        // PRIMITIVE DATA TYPES
        byte smallNumber = 100;
        short shortNumber = 30000;
        int number = 50000;
        long largeNumber = 9000000000L;

        float percentage = 87.5f;
        double decimalNumber = 99.99;

        char section = 'A';
        boolean isActive = true;

        // NON-PRIMITIVE DATA TYPE: ARRAY
        int[] subjectMarks = {85, 90, 88};

        // Taking input from the user
        System.out.print("\nEnter student name: ");
        String studentName = sc.nextLine();

        System.out.print("Enter age: ");
        int studentAge = sc.nextInt();

        System.out.print("Enter marks: ");
        int studentMarks = sc.nextInt();

        System.out.print("Enter CGPA: ");
        double studentCgpa = sc.nextDouble();

        System.out.print("Enter grade: ");
        char studentGrade = sc.next().charAt(0);

        System.out.print("Did the student pass? (true/false): ");
        boolean studentPassed = sc.nextBoolean();

        // OBJECT CREATION: Creating an object of Basic class
        Basic student1 = new Basic(
            studentName,
            studentAge,
            studentMarks,
            studentCgpa,
            studentGrade,
            studentPassed
        );

        // Calling an instance method using the object
        student1.display();

        // Calling a static method using the class name
        Basic.showCount();

        // OUTPUT METHODS
        System.out.print("\nPrint without new line: ");
        System.out.print("A");

        System.out.println("\nPrint with new line:");
        System.out.println("B");

        // printf(): Formatted output
        System.out.printf(
            "%s is %d years old.%n",
            studentName,
            studentAge
        );

        // Displaying other variables
        System.out.println("\n----- Other Concepts -----");

        System.out.println("Year: " + year);
        System.out.println("Semester: " + semester);
        System.out.println("Course: " + course);
        System.out.println("Price: " + price);

        System.out.println("byte: " + smallNumber);
        System.out.println("short: " + shortNumber);
        System.out.println("int: " + number);
        System.out.println("long: " + largeNumber);

        System.out.println("float: " + percentage);
        System.out.println("double: " + decimalNumber);

        System.out.println("char: " + section);
        System.out.println("boolean: " + isActive);

        System.out.println("PI: " + PI);

        // Accessing array elements
        System.out.println("First subject marks: " + subjectMarks[0]);

        sc.close();
    }
}
