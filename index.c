#include<stdio.h>
 
int main() {
   int i, arr[50], n;
   scanf("%d", &n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   for (i = 0; i < n; i++) {
      printf("\n%d", i, i);
   }
 
   return 0;
}
