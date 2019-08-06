#include<stdio.h>
// tinh trung binh cong duong cheo
int main(){
	int a[4][4];
	int tong = 0;
	float avg=0;
	//Nhap phan tu trong mang
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			scanf("%d",&a[i][j]);	
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0; j<4; j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(i==j){
				tong= tong + a[i][j];
			}
		}
	}
	avg=(float)tong/4;
	printf("trung binh cong cua duong cheo trong ma tran tren la: %f",avg);
}
