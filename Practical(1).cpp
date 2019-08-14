#include <stdio.h>

void sum(int a, int b){
	int tong;
	tong=a+b;
	printf("Tong cua hai so a va b la: %d\n",tong);
}
void sub(int a, int b){
	int hieu;
	hieu=a-b;
	printf("Hieu cua hai so a va b la: %d\n",hieu);
}
void mul(int a, int b){
	int tich;
	tich=a*b;
	printf("Tich cua hai so a va b la: %d\n",tich);
}
void div(int a,int b){
	float thuong;
	thuong=(float)a/(float)b;
	printf("Thuong cua hai so a va b la: %f\n",thuong);
}
int main(){
	int a;
	int b;
	printf("Nhap so a:\n");
	scanf("%d",&a);
	printf("Nhap so b:\n");
	scanf("%d",&b);
	
	sum(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	return 0;
}


