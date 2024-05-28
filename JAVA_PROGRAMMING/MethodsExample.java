import java.io.*;
import java.util.*;
import java.util.Scanner;

class MethodsExample {
    public static void main(String[] args) {
        // Method without arguments and without return value
        greet();
        
        // Method with arguments and without return value
        add(5, 3);

        // Method without arguments and with return value
        String message = getMessage();
        System.out.println("Message: " + message);

        // Method with arguments and with return value
        double result = multiply(2.5, 3.0);
        System.out.println("Multiplication Result: " + result);
    }

    // Method without arguments and return value
    public static void greet() {
        System.out.println("Hello! Welcome to the methods example.");
    }

    // Method with arguments and return value
    public static void add(int a, int b) {
        int s= a + b;
	System.out.println("Sum: " + s);
    }

    // Method without arguments and with return value
    public static String getMessage() {
        return "This is a message from the getMessage method.";
    }

    // Method with arguments and with return value
    public static double multiply(double x, double y) {
        return x * y;
    }
}