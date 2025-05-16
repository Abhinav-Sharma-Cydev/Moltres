#include "stdio.h"
int r = -1, f = -1, n, item;

void enqueue(int Q[]) // input element             r=rear and f=front
{
    if (r == n - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter item: ");
        scanf("%d", &item);
        if (f == -1)
        {
            f = 0;
        }
        r += 1;
        Q[r] = item;
    }
}

void dequeue(int Q[]) // delete element
{
    if (f == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        item = Q[f];
        printf("\nDeleted item is: %d\n", item);
        f += 1;
        if (f > r)
        {
            f = -1;
            r = -1;
        }
    }
}

void display(int Q[]) // Display
{
    printf("\nThe queue is: ");
    if (f == -1)
    {
        printf("empty");
    }
    else
    {
        for (int i = f; i <= r; i++)
            printf("%d|", Q[i]);
    }
}

int main()
{
    printf("Enter the size of the Queue: ");
    scanf("%d", &n);
    int x, Q[n];
    if (n != 0)
    {
        while (1)
        {
            printf("\nSelect the operation to perform:\n (1) for Rear\n (2) for front\n (3) for Display\n (4) for Exit\nEnter your choice: ");
            scanf("%d", &x);
            switch (x)
            {
            case 1:
                enqueue(Q);
                break;
            case 2:
                dequeue(Q);
                break;
            case 3:
                display(Q);
                break;
            case 4:
                printf("\nExiting from the program......");
                return 0;
            default:
                printf("Enter a valid choice");
            }
        }
    }
    else
        printf("Size of the queue cannot be '0' please try again ");
}