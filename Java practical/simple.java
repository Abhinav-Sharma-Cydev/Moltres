import java.util.Scanner;

public class simple {
  static double simpint(double p, double r, int t) {
    return (p * r * t) / 100;
  }

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the value of p,r and t: ");
    double p = sc.nextDouble();
    double r = sc.nextDouble();
    int t = sc.nextInt();
    System.out.println("Simple Interest is:" + simpint(p, r, t));
    sc.close();
  }
}
