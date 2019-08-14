#include<stdio.h>

int main(){
	
	int a[100];
	
	for(int i=0;i<10;i++){
		printf("Nhap vao phan tu:\n",i);
		scanf("%d",&a[i]);
	}
	printf("Reverse array:\n");
	
	for(int i=9;i>=0;i--){
		printf("%5d",a[i]);
	}
	return 0;
}
