#include<stdio.h>

int main(){
	int a[10][10], dong, cot, i, j;
	int b[10][10], m = 1, n;

	printf("Nhap so dong, so cot: ");
	scanf("%d%d",&dong,&cot);

	for(i=1;i<=dong;i++){
		for(j=1;j<=cot;j++){
			printf("\nNhap vao phan tu a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("Ma tran da nhap la:\n");
	for(i=1; i<=dong; i++){
		for(j=1; j<=cot; j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	
	for(j = 1; j <= cot; j ++) {
		n = 1;
		for(i = 1; i <= dong; i ++) {
			b[m][n] = a[i][j];
			n ++;
		}
		m ++;
	}

	printf("Ma tran chuyen vi : \n");
	for(i = 1; i <= cot; i ++){
		for(j = 1; j <= dong; j ++){
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
