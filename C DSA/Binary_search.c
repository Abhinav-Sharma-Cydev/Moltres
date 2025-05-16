#include <stdio.h>
void main()
{
    int n ,i, key, f, l, mid;
    printf("Enter the size of the array: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the item of the array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Entered arary is: ");
  for (i = 0; i < n; i++)
    printf("%d  ", a[i]);
  printf("\nEnter the item to be searched: ");
  scanf("%d", &key);

    // logic
    f = 0;
    l = n - 1;
    while (f <= l)
    {
        mid = (f + l) / 2;
        if (a[mid] == key)
        {
            printf("Element found at %d position", mid + 1);
            break;
        }
        else if (a[mid] > key) l = mid - 1;
        else f = mid + 1;
    }
    if (f > l)
        printf("Element not found");
} 