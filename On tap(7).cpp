#include<stdio.h>
int main(){
	int n;
	printf("Ban hay nhap gia tri cho n : \n");
	scanf("%d",&n);
	int i;
	int tich = 1;
	for ( i = 1; i<= n; i++){
		tich = tich * i;
	}
	printf("%d",tich);
	return 0;
}
