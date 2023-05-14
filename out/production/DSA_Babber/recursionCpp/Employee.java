//import interface

interface EmployeeDetails {
  String getName();

  int getAge();

  String getAddress();

  String getPhoneNumber();

  double getSalary();
}

public class Employee implements EmployeeDetails {
  private String name;
  private int age;
  private String address;
  private String phoneNumber;
  private double salary;

  public Employee(
    String name,
    int age,
    String address,
    String phoneNumber,
    double salary
  ) {
    this.name = name;
    this.age = age;
    this.address = address;
    this.phoneNumber = phoneNumber;
    this.salary = salary;
  }

  public String getName() {
    return name;
  }

  public int getAge() {
    return age;
  }

  public String getAddress() {
    return address;
  }

  public String getPhoneNumber() {
    return phoneNumber;
  }

  public double getSalary() {
    return salary;
  }

  public static void main(String[] args) {
    EmployeeDetails employee = new Employee(
      "John",
      25,
      "123 Main Street",
      "555-555-5555",
      50000.00
    );
    System.out.println("Name: " + employee.getName());
    System.out.println("Age: " + employee.getAge());
    System.out.println("Address: " + employee.getAddress());
    System.out.println("Phone Number: " + employee.getPhoneNumber());
    System.out.println("Salary: " + employee.getSalary());
  }
}

