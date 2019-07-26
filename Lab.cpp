#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap canh a:\n");
	scanf("%d",&a);
	printf("Nhap canh b:\n");
	scanf("%d",&b);
	printf("Nhap canh c:\n");
	scanf("%d",&c);
	
	if(a+b>c && b+c>a && a+c>b){
		int C = a+b+c;
		double p= (double)C/2;
		double S=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Day la 3 canh cua hinh tam giac\n");
		printf("Chu vi hinh tam giac la %d\nDien tich hinh tam giac la%lf\n",C,S);
	}else{
		printf("Day khong phai hinh tam giac");
	}
	return 0;
}
