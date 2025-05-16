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

class quarterly extends yearly {
    void update_q() {
        r /= 4;
        t *= 4;
    }
}

class compound_hierarchical_inhr {
    public static void main(String args[]) {
        double p, r, t;
        halfyearly obj1 = new halfyearly();
        quarterly obj2 = new quarterly();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of p, r and t: ");
        p = sc.nextDouble();
        r = sc.nextDouble();
        t = sc.nextDouble();
        obj1.p = p;
        obj2.p = p;
        obj1.r = r;
        obj2.r = r;
        obj1.t = t;
        obj2.t = t;
        System.out.println("Yearly compound interest is: " + obj1.formula());
        obj1.update_hy();
        System.out.println("Halfyearly compound interest is: " + obj1.formula());
        obj2.update_q();
        System.out.println("Quarterly compound interest is: " + obj2.formula());
        sc.close();
    }
}