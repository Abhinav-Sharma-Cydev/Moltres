#include <stdio.h>
void main()
{
    int n, i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the item of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Entered array is: ");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);          //input and print of array


        //  LOGIC 
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    
    printf("\nSorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
}