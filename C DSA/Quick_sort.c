#include "stdio.h"
int partition(int a[], int low, int high)
{
    int p = a[low], temp;
    int i = low, j = high;
    while (i < j)
    {
        while (a[i] < p && i <= high - 1)
            i++;
        while (a[j] > p && j >= low + 1)
            j--;
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    return j;
}

void quicksort(int a[], int low, int high)
{
    int pi; // pi= pivot
    if (low < high)
    {
        pi = partition(a, low, high);
        quicksort(a, low, pi - 1);
        quicksort(a, pi + 1, high);
    }
}

void main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elments: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered list: ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    quicksort(a, 0, 6);
    printf("\nSorted list: ");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
}
