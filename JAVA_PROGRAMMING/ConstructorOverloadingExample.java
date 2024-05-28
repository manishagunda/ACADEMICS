import java.io.*;
import java.util.*;
import java.util.Scanner;



 class ConstructorOverloadingExample {
    private int value1;
    private double value2;

    // Constructor with no parameters
    public ConstructorOverloadingExample() {
        System.out.println("Default constructor called");
    }

    // Constructor with one parameter
    public ConstructorOverloadingExample(int v1) {
        this.value1 = v1;
        System.out.println("Constructor with one parameter called");
    }

    // Constructor with two parameters
    public ConstructorOverloadingExample(int v1, double v2) {
        this.value1 = v1;
        this.value2 = v2;
        System.out.println("Constructor with two parameters called");
    }

    // Getter methods to retrieve values
    public int getValue1() {
        return value1;
    }

    public double getValue2() {
        return value2;
    }

    public static void main(String[] args) {
        // Creating objects using different constructors
        ConstructorOverloadingExample obj1 = new ConstructorOverloadingExample();
        ConstructorOverloadingExample obj2 = new ConstructorOverloadingExample(10);
        ConstructorOverloadingExample obj3 = new ConstructorOverloadingExample(20, 30.5);

        // Displaying values using getter methods
        System.out.println("Value 1: " + obj2.getValue1());
        System.out.println("Value 2: " + obj3.getValue2());
    }
}