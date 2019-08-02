#include <stdio.h>

int main(){
	int a,b;
	int temp;
	
	printf("Nhap vao 2 so a,b:\n");
	scanf("%d%d",&a,&b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("Hoan doi vi tri \na = %d\nb = %d\n",a,b);
}
