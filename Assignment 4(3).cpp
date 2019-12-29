#include<stdio.h>

int main(){
	int a;
	printf("Nhap vao so muon kiem tra\n");
	scanf("%d",&a);
	
	int dao = 0;
	int tam = a;
	
	while (tam>0){
		dao=dao*10 + tam%10;
		tam=tam/10;
	}
	if(dao==a && a>=10){
		printf("%d la mot so nghich thuan",a);
	}else{
		printf("%d khong phai la mot so nghich thuan",a);
	}
	
}
