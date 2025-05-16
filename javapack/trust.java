import pack.cal;
import java.util.Scanner;

class test {
    int x, y;
}

class trust {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i, z;
        System.out.println("Enter the two Numbers");
        test obj = new test();
        obj.x = sc.nextInt();
        obj.y = sc.nextInt();
        System.out.println("Enter your choice");
        System.out.println("1->Addition\n 2->Subtraction\n 3->Multiplication\n 4->Division\n");
        i = sc.nextInt();
        cal objc = new cal();
        switch (i) {
            case 1:
                z = objc.sum(obj.x, obj.y);
                System.out.println("Addition =" + z);
                break;
            case 2:
                z = objc.sub(obj.x, obj.y);
                System.out.println("Subtraction =" + z);
                break;
            case 3:
                z = objc.multiply(obj.x, obj.y);
                System.out.println("Multiplication =" + z);
                break;
            case 4:
                z = objc.div(obj.x, obj.y);
                System.out.println("Division =" + z);
                break;
        }sc.close();
    }
}