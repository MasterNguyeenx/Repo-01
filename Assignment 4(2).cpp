#include <stdio.h>

int main(){
	int x;
	int s = 0;
	printf("Nhap mot so nguyen duong:\n");
	scanf("%d",&x);
	
	for(int y=1; y<x; y++){
	if ( x%y == 0)
	s += y;
	}
	if(s == x){
		printf("%d la so hoan hao\n",x);
	}else{
		printf("%d khong phai la mot so hoan hao\n",x);
	}
}
