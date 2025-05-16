import java.util.*;

class sort_str {
    public static void main(String[] a) {
        System.out.print("Enter string: ");
        String[] words = new Scanner(System.in).nextLine().split(" ");
        Arrays.sort(words);
        System.out.print("Sorted String is: ");
        for (String s : words) {
            System.out.print(s + " ");
        }
    }
}
