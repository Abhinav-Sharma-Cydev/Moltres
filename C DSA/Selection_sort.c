#include "stdio.h"
void main()
{
    int n, i, j, temp, smallpos; // smallpos = smallest position
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Entered array is: ");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]); // input and print of array

    //  LOGIC
    for (i = 0; i < n; i++)
    {
        smallpos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[smallpos] > a[j])
                smallpos = j;
        }
        temp = a[smallpos];
        a[smallpos] = a[i];
        a[i] = temp;
    }

    printf("\nSorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
}
