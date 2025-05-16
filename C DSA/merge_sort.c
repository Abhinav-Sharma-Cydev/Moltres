#include <stdio.h>
void merge(int arr[], int l, int m, int r) // l= left , r= right
{
   int i, j, n1 = m - l + 1, n2 = r - m, L[n1], R[n2]; // n1=length of left array , n2= length of right array , m= middle of array
   for (i = 0; i < n1; i++)
      L[i] = arr[l + i];
   for (i = 0; i < n2; i++)
      R[i] = arr[m + 1 + i];
   i = j = 0;
   int k = l;
   while (i < n1 && j < n2)
   {
      if (L[i] <= R[j])
      {
         arr[k] = L[i];
         i++;
         k++;
      }
      else
      {
         arr[k] = R[j];
         j++;
         k++;
      }
   }
   while (i < n1)
   {
      arr[k] = L[i];
      k++;
      i++;
   }
   while (j < n2)
   {
      arr[k] = R[j];
      k++;
      j++;
   }
} // merge end

void mergesort(int arr[], int l, int r)
{
   if (l < r)
   {
      int m;
      m = (l + r) / 2;
      mergesort(arr, l, m);
      mergesort(arr, m + 1, r);
      merge(arr, l, m, r);
   }
} // mergesort end

void main()
{
   int n, i;
   printf("\nEnter the number of elemets: ");
   scanf("%d", &n);
   int mat[n];
   printf("Enter the elements: ");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &mat[i]);
   }
   printf("Entered list: ");
   for (i = 0; i < n; i++)
   {
      printf("%d  ", mat[i]);
   }
   printf("\nSorted list: ");
   mergesort(mat, 0, n - 1);
   for (i = 0; i < n; i++)
   {
      printf("%d  ", mat[i]);
   }
}