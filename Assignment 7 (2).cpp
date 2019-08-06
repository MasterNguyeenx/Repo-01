#include<stdio.h>

int main(){
	int a[4][3];
	int b[4][3];
	int c[4][3];
	int d[4][3];
	
	
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("Nhap vao ma tran a[i][j] :");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("nhap vao ma tran b[i][j] :");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\n");
	// Ham tinh tong , hieu ma tran
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			c[i][j] = a[i][j] + b[i][j];
			d[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("Tong cua 2 ma tran:\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("%5d",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		printf("Hieu cua 2 ma tran(a-b):\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("%5d",d[i][j]);
		}
		printf("\n");
	}
}
