import java.util.Scanner;

class Employee {
    private int empId;
    private String empName;
    private double empSalary;

    public Employee(int empId, String empName, double empSalary) {
        this.empId = empId;
        this.empName = empName;
        this.empSalary = empSalary;
    }

    public void displayDetails() {
        System.out.println("Employee ID: " + empId + "\nEmployee Name: " + empName + "\nEmployee Salary: $" + empSalary);
    }

    public void updateSalary(double newSalary) {
        empSalary = newSalary;
        System.out.println("Salary updated successfully!");
    }
}
 class EmployeeProgram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Employee ID, Name, and Salary:");
        Employee emp1 = new Employee(sc.nextInt(), sc.next(), sc.nextDouble());

        System.out.println("\nEmployee Details:");
        emp1.displayDetails();

        System.out.println("\nEnter new salary for employee:");
        emp1.updateSalary(sc.nextDouble());

        System.out.println("\nUpdated Employee Details:");
        emp1.displayDetails();

        sc.close();
    }
}