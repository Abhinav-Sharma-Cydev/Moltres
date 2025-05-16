class method_overloading_example {
    int shape(int side) {
        return side * side;
    }

    int shape(int l, int b) {
        return l * b;
    }

    public static void main(String args[]) {
        method_overloading_example obj = new method_overloading_example();
        int square = obj.shape(5);
        int rectangle = obj.shape(5, 6);
        System.out.println("Area of suare is: " + square + "\nArea of rectangle is: " + rectangle);
    }
}