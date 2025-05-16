import java.util.*;

class default_constructor {
    default_constructor() {
        System.out.print("Default constructor called\n");
    }

    void calculate() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number n: ");
        int x = sc.nextInt();
        System.out.print("Enter the power y: ");
        int y = sc.nextInt();
        int k = x;
        for (int i = 1; i < y; i++) {
            x *= k;
        }
        System.out.println(k + " to the power " + y + " is: " + x);
        sc.close();
    }

    public static void main(String args[]) {
        default_constructor obj = new default_constructor();
        obj.calculate();

    }
}