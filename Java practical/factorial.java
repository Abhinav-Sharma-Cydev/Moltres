import java.util.*;

class factorial {
    static int number;

    factorial(int n) {
        number = n;
        System.out.print("Parameterized constructor called\n");
    }

    void calculate() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();
        int k = 1;
        for (int i = 1; i <= n; i++)
            k *= i;
        System.out.println("Factorial of " + n + " is: " + k);
        sc.close();
    }

    public static void main(String args[]) {
        factorial obj = new factorial(number);
        obj.calculate();

    }
}