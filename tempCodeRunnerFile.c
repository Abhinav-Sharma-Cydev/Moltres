#include"stdio.h"
void main() {
    int a = 100, b = 20;
    a = a + b -(b = a);
    printf("After swapping:\na = %d\nb = %d ",a ,b);
}