class Student {
    String name;
    double fees;

    // Constructor to initialize student
    public Student(String name, double fees) {
        this.name = name;
        this.fees = fees;
    }

    // Method to increase fees by 25%
    public void increaseFees() {
        this.fees += this.fees * 0.25;
    }

    // Method to display student details
    public void display() {
        System.out.println("Name: " + name + ", Fees: " + fees);
    }
}

public class Main {
    public static void main(String[] args) {
        // Creating student objects
        Student student1 = new Student("John", 1000);
        Student student2 = new Student("Alice", 1000);
        Student student3 = new Student("Bob", 1000);

        // Increase fees for student2 and student3
        student2.increaseFees();
        student3.increaseFees();

        // Displaying details of all students
        student1.display();
        student2.display();
        student3.display();
    }
}
