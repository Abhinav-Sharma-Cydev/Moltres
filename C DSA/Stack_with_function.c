#include "stdio.h"
int top = -1, n, item;

void push(int a[]) // for insert item in stack
{
    if (top == n - 1)
    {
        printf("\nStack is Overflow");
    }
    else
    {
        printf("Enter the item: ");
        scanf("%d", &item);
        top++;
        a[top] = item;
    }
}

void pop(int a[]) // for delete item from the stack
{
    if (top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        item = a[top];
        printf("Popped item is %d ", item);
        top--;
    }
}

void display(int a[]) // for display the items
{
    printf("\nThe stack is: ");
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        for (int i = top; i >= 0; i--)
            printf("%d|", a[i]);
    }
}

int main()
{
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
    int a[n], x;
    if (n != 0)
    {
        for (;;) // it is also used for infinite looping
        {
            printf("\nChoose operation from the menu:\n(1) for push\n(2) for pop\n(3) for Display\n(4) for Exit\nSelect your choice:");
            scanf("%d", &x);
            switch (x)
            {
            case 1:
                push(a);
                break;
            case 2:
                pop(a);
                break;
            case 3:
                display(a);
                break;
            case 4:
                printf("Exiting.......");
                return 0;
            default:
                printf("Enter a valid choice");
            }
        }
    }
    else
        printf("Size of the stack cannot be '0' please try again");
}
