#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
	int n;
	printf("Nhap n:\n");
	scanf("%d",&n);

	for (int i=2; i<=n; i++){
        for (int j=2; j*j<=i; j++)
        {
        	int demsoluonguoc;
            if (i % j == 0){
            	demsoluonguoc ++;
			}
            printf("%d",&i);
               
        }
	}
	return 0;
}
