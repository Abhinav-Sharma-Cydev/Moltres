#include <stdio.h>
void main()
{
  int key, i, n;
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

  // logic for linear search
  for (i = 0; i < n; i++)
  {

    if (a[i] == key)
    {
      printf("\nElement found at %d position ", i + 1);
      break;
    }
  }
  if (i == n)
    printf("Element not found");
}