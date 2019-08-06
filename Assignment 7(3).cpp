#include<stdio.h>

int main() {
   int a[4][3],i,j,temp;

   printf("\nNhap ma tran:\n");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &a[i][j]);
      }
   }

   printf("\nMa tran vua nhap la: \n");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 3; j++) {
         printf("%5d", a[i][j]);
      }
      printf("\n");
   }

   /* Tim ma tran chuyen vi */
   for (i = 1; i < 4; i++) {
      for (j = 0; j < 3; j++) {
         temp = a[i][j];
         a[i][j] = a[j][i];
         a[j][i] = temp;
      }
   }

   printf("\nMa tran chuyen vi cua ma tran da cho la:\n");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 3; j++) {
         printf("%5d", a[i][j]);
      }
      printf("\n");
   }

   return 0;
}
