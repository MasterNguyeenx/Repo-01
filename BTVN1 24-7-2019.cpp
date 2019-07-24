#include <stdio.h>

int main(){
	
	int x,y;
	
	printf("Nhap x:\n");
	scanf("%d",&x);
	printf("Nhap y:\n");
	scanf("%d",&y);
	
	if(x>y){
		printf("Thuong cua %d va %d la: %d\n",x,y,x/y);
	}else{
		printf("Tich cua %d va %d la: %d\n",x,y,x*y);
	}
	return 0;
}
