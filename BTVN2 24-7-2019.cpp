#include <stdio.h>

int main(){
	int a,b,c,max,min;
	printf("Nhap a:\n");
	scanf("%d",&a);
	printf("Nhap b:\n");
	scanf("%d",&b);
	printf("Nhap c:\n");
	scanf("%d",&c);
	
	max=a;
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	min=a;
	if(min>b){
		min=b;
	}
	if(min>c){
		min=c;
	}

	
	printf("So nho nhat la %d\n",min);
	printf("So lon nhat la %d\n",max);
return 0;	
}

