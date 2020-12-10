#include<stdio.h>

int main()
{
   int n, i, arr[n];
   int *ptr;
 
   ptr = &arr[0];
 
   printf("Enter the size of array :: ");
   scanf("%d", &n);
 
   printf("\nEnter %d integers into array:\n ",n);
   for (i = 0; i < n; i++)
  {
      printf("\nEnter %d integer into array: ", i+1);
      scanf("%d", ptr);
      ptr++;
   }
 
   ptr = &arr[n-1];
 
   printf("\nElements of array in reverse order are :\n");
 
   for (i = n-1; i >= 0; i--) {
      printf("\n\nElement %d is %d  ", i+1, *ptr);
      ptr--;
   }
 
 return 0;
}
