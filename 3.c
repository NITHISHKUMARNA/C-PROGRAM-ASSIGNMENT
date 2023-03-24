#include <stdio.h>

int main() {
   int n, i;
   printf("Input the number of elements to be stored in the array :");
   scanf("%d", &n);

   int arr1[n], arr2[n];
   printf("Input %d elements in the array:\n", n);
   
   for(i = 0; i < n; i++) {
      printf("element - %d : ", i);
      scanf("%d", &arr1[i]);
   }

   // copying elements of arr1 into arr2
   for(i = 0; i < n; i++)
      arr2[i] = arr1[i];

   printf("\nThe elements of arr1 are :");
   for(i = 0; i < n; i++)
      printf("%d ", arr1[i]);

   printf("\nThe elements of arr2 are :");
   for(i = 0; i < n; i++)
      printf("%d ", arr2[i]);

   return 0;
}
output:
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12

The elements of arr1 are :15 10 12 
The elements of arr2 are :15 10 12 