#include <stdio.h>

int main(){
	int n, gt=1,i=1;
	float s=0;
    printf("\nNhap n: ");
    scanf("%d", &n);
      
	for(i=1; i<=n; i++){
        gt=gt*i;
        s=s+1.0/gt;
    }
    printf("\nS = %0.2f", s);
}
