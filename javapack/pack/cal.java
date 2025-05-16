package pack;
class Sum {
    public int sum(int x, int y) {
        return x + y;
    }
}

class Sub extends Sum {
    public int sub(int x, int y) {
        return x - y;
    }
}

class Multiply extends Sub {
    public int multiply(int x, int y) {
        return x * y;
    }
}

class Div extends Multiply {
    public int div(int x, int y) {
            return x/y;}
    }

    public class cal extends Div {
}