import java.util.Scanner;

public class compute {
    static double area(double side) {
        return side * side;
    }

    static double area(double length, double breadth) {
        return length * breadth;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of side for square: ");
        double side = sc.nextDouble();
        System.out.print("Enter the value of length and breadth: ");
        double length = sc.nextDouble();
        double breadth = sc.nextDouble();
        System.out.print("Area of Square is: " + area(side) + "\nArea of rectangle: " + area(length, breadth));
        sc.close();
    }
}