#include <stdio.h>
#include <string.h>

int main (void) {
   char s[] = "jasadkfasd";
   char temp;

   int i, j;
   int n = strlen(s);

   printf("Chuoi truoc khi sap xep: %s \n", s);

   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (s[i] > s[j]) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
   }
   
   printf("\nChuoi sau khi sap xep %s \n", s);
   return 0;
}
