import java.util.Scanner;

class yearly {
    double p, r, t;

    double formula() {              
        return p * Math.pow((1 + r / 100), t) - p;
    }
}

class halfyearly extends yearly {
    void update_hy() {
        r /= 2;
        t *= 2;
    }
}

class quarterly extends halfyearly {
    void update_q() {
        r /= 2;
        t *= 2;
    }
}

class compound_multi_level_inhr {
    public static void main(String args[]) {
        quarterly obj = new quarterly();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of p, r and t: ");
        obj.p = sc.nextDouble();
        obj.r = sc.nextDouble();
        obj.t = sc.nextDouble();
        System.out.println("Yearly compound interest is: " + obj.formula());
        obj.update_hy();
        System.out.println("Halfyearly compound interest is: " + obj.formula());
        obj.update_q();
        System.out.println("Quarterly compound interest is: " + obj.formula());
        sc.close();
    }
}
