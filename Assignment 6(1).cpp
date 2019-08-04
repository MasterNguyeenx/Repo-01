#include<stdio.h>
int main(){
	int a[10];
	int tong,i;
	float avg;
	
	for(int i=0;i<10;++i){
		scanf("%d",&a[i]);
	}
	tong = avg = 0;
	for(i=0;i<10;++i){
		tong += a[i];
	}
	printf("Trung binh cong cua 10 so tren la: %f\n",avg=(float)tong/i);
}
