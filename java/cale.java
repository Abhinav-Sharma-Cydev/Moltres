class cale {
    public int shape(int side) {
        return side * side;
    }

    public int shape(int l, int b) {
        return l * b;
    }

    public static void main(String args[]) {
        cale obj = new cale();
        System.out.println("Area of suare is: " + obj.shape(5) + "\nArea of rectangle is: " + obj.shape(5, 6));
    }
}