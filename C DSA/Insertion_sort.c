#include "stdio.h"
void main()
{
    int n, i, j, key;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEntered array is: ");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]); // input and print of array

    //   LOGIC
    for (i = 0; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printf("\nsorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
}