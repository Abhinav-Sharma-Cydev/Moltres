#include <stdio.h>
int n, f = -1, r = -1, item;

void ins(int q[])
{
    if (f == (r + 1) % n)
    {
        printf("\nQueue is full ");
        return;
    }
    if (f == -1)
        f = 0;
    r = (r + 1) % n;
    printf("\nEnter the data: ");
    scanf("%d", &item);
    q[r] = item;
}

void del(int q[])
{
    if (f == -1)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    item = q[f];
    printf("\nDeleted item is: %d \n", item);
    if (f == r)
    {
        f = -1;
        r = -1;
        return;
    }
    f = (f + 1) % n;
}

void dis(int q[])
{
    int i;
    if (f == -1)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    printf("\nQueue is: ");
    if (r >= f)
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d |", q[i]);
        }
    }
    else
    {
        for (i = f; i < n; i++)
            printf(" %d |", q[i]);
        for (i = 0; i <= r; i++)
            printf(" %d |", q[i]);
    }
    printf("\n");
}

void main()
{
    printf("Enter the size of the Queue: ");
    scanf("%d",&n);
    int q[n],x;
    if (n != 0)
    {
        while (x != 4)
        {
            printf("\nSelect the operation to perform: \n(1) for Insert\n(2) for Delete\n(3) for Display\n(4) for Exit\nEnter your choice: ");
            scanf("%d", &x);
            switch (x)
            {
            case 1:
                ins(q);
                break;
            case 2:
                del(q);
                break;
            case 3:
                dis(q);
                break;
            case 4:
                printf("Exiting......");
                break;
            default:
                printf("\nEnter a valid choice\n");
            }
        }
    }else printf("Size of the queue cannot be '0' please try again");
}