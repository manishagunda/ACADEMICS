import java.io.*;
import java.util.*;
import java.util.Scanner;

class NestedLoopExample {
    public static void main(String[] args) {
        // Using nested loops to print a multiplication table
        System.out.println("Multiplication Table:");

        // Outer loop for the rows (1 to 10)
        for (int i = 1; i <= 10; i++) {
            // Inner loop for the columns (1 to 10)
            for (int j = 1; j <= 10; j++) {
                // Print the product of i and j
                System.out.print(i * j + "\t");
            }
            // Move to the next line after each row
            System.out.println();
        }
    }
}