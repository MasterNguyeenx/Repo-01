#include <stdio.h>

int main(){
	int a,b;
	
	printf("Nhap so a:\n");
	scanf("%d",&a);
	printf("Nhap so b:\n");
	scanf("%d",&b);
	
	int min, max;
	if(a>b){
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}
	printf("Max = %d\nMin = %d",max,min);
}
