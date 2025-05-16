import java.io.*;
public class AddIntFloat {
    public static void main(String[] args) {
        DataInputStream input = new DataInputStream(System.in);
        try {
            System.out.print("Enter an integer value: ");
            int intValue = Integer.parseInt(input.readLine());
            System.out.print("Enter a float value: ");
            float floatValue = Float.parseFloat(input.readLine());
            float result = intValue + floatValue;
            System.out.println("The sum of the integer and float values is: " + result);
        } catch (IOException e) {
            System.out.println("An error occurred while reading input.");
        } catch (NumberFormatException e) {
            System.out.println("Invalid input format.");
        }
    }
}
