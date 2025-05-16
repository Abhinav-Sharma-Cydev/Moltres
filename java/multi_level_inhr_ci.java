import java.util.*;

class yearly {
    double t, p, a, r;

    void input() {
        System.out.print("Enter the values of p,r and t: ");
        Scanner sc = new Scanner(System.in);
        p = sc.nextDouble();
        r = sc.nextDouble();
        t = sc.nextDouble();
        sc.close();
    } 

    double cal() {
        double k = 1;
        for (int i = 1; i <= t; i++) {
            k = k * (1 + r / 100.0);
        }
        a = p * k;
        return a - p;
    }
}

class halfyearly extends yearly {
    void update_h() {
        t = t / 2;
        r = r * 2.0;
    }
}

class quarterly extends halfyearly {
    void update_q() {
        r = r * 2;
        t = t / 4.0;
    }
}

class multi_level_inhr_ci {
    public static void main(String args[]) {
        int ch;
        System.out.print("Enter 1: Yearly\n2: Half Yearly\n3: Quaterly\n");
        Scanner sc = new Scanner(System.in);
        ch = sc.nextInt();
        quarterly obj = new quarterly();
        switch (ch) {
            case 1:
                obj.input();
                System.out.println("Yearly ci is: " + obj.cal());
                break;
            case 2:
                obj.input();
                obj.update_h();
                System.out.println("Half Yearly ci is: " + obj.cal());
                break;
            case 3:
                obj.input();
                obj.update_q();
                System.out.println("Quaterly ci is: \n" + obj.cal());
                break;
            default:
                System.out.println("Invalid choice");
        }sc.close();
    }
}
