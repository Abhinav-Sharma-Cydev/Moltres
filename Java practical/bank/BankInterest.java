package bank;
import java.util.*;

interface Interest {
    double compute(double p, double r, double t);
}
class RD implements Interest {
    public double compute(double p, double r, double t) {
        return p * t + p * t * (t + 1) * r / (2 * 12 * 100);
    }
}
class CI implements Interest {
    public double compute(double p, double r, double t) {
        return p * Math.pow(1 + r / 100, t) - p;
    }
}
public class BankInterest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Principal: ");
        double p = sc.nextDouble();
        System.out.print("Rate (%): ");
        double r = sc.nextDouble();
        System.out.print("Time (years): ");
        double t = sc.nextDouble();
        sc.close();
        Interest rd = new RD(), ci = new CI();
        System.out.println("RD Interest: " + rd.compute(p, r, t));
        System.out.println("CI Interest: " + ci.compute(p, r, t));
    }
}
