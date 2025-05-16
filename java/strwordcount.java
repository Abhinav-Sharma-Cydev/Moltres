import java.util.Scanner;

public class strwordcount {
    public static void main(String[] args) {
        System.out.print("Enter a string: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int flag = 0;  // Use 0 for false, 1 for true
        
        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                if (flag == 0) {
                    flag = 1;  // Start a new word
                    System.out.print(c);
                } else {
                    System.out.print(c);  // Continue the word
                }
            } else if (flag == 1) {
                System.out.println();  // End the word
                flag = 0;  // Reset
            }
        }
        if (flag == 1) System.out.println();  // Print last word if any
        sc.close();
    }
}
