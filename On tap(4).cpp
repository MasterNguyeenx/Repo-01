#include <stdio.h>

int main(){
	int n;
	printf("Nhap so n la mot so chan\n");
	input:
	scanf("%d",&n);
	
	if(n % 2 != 0){
		printf("khong phai so chan, yeu cau nhap lai\n");
		goto input;
	}
}
